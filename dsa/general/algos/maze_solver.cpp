#include <iostream>
#include <string>
#include <vector>

using std::cout, std::string, std::tuple, std::get, std::vector;

// A point represented as a struct with x and y coordinates
struct Point {
    int x;
    int y;
};

// This is the function that actually calls itself recursively.
bool walk(vector<string> maze, char wall, Point curr, Point end,
          vector<vector<bool>> seen, vector<Point>* path,
          const vector<vector<int>> directions) {
    // base cases:
    // off the map
    if (curr.x < 0 || curr.x >= maze[0].size() || curr.y < 0 ||
        curr.y >= maze.size()) {
        return false;
    }

    // on a wall
    if (maze[curr.y][curr.x] == wall) {
        return false;
    }

    // at the end
    if (curr.x == end.x && curr.y == end.y) {
        path->push_back(end);
        return true;
    }

    // at the end
    if (seen[curr.y][curr.x]) {
        return false;
    }

    // 3 steps to recursion
    // pre:
    seen[curr.y][curr.x] = true;
    path->push_back(curr);

    // recurse:
    for (int i = 0; i < directions.size(); i++) {
        int x = directions[i][0];
        int y = directions[i][1];

        if (walk(maze, wall, {x = curr.x + x, y = curr.y + y}, end, seen, path,
                 directions)) {
            return true;
        }
    }

    // post:
    path->pop_back();

    return false;
}

// This returns a tuple of a vector of points and bool, since that's
// more or less the only way to have multiple return values in C++.
// The vector of points is the path that was taken to solve the maze,
// and the bool is whether or not a solution was found.
tuple<vector<Point>, bool> solve(vector<string> maze, char wall, Point start,
                                 Point end) {
    vector<vector<bool>> seen = {};
    vector<Point> path = {};
    const vector<vector<int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

    for (int i = 0; i < maze.size(); i++) {
        vector<bool> row;
        for (int j = 0; j < maze[i].size(); j++) {
            row.push_back(false);
        }
        seen.push_back(row);
    }

    bool ok = walk(maze, wall, start, end, seen, &path, directions);

    return make_tuple(path, ok);
}

int main() {
    vector<string> maze = 
        {"####### #",
         "##      #",
         "## ######"};
    char wall = '#';

    auto solved = solve(maze, wall, {7, 0}, {2, 2});

    // check the second value of the tuple to see if a solution was found
    if (!get<1>(solved)) {
        cout << "No solution\n";
        return 1;
    }

    cout << "Solution:\n";
    // iterate over the first value of the tuple, i.e. the path, and print
    // out the coordinates of each point
    for (auto i : get<0>(solved)) {
        cout << i.x << "," << i.y << "\n";
    }

    return 0;
}
