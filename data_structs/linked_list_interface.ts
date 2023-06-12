interface LinkedList<T> {
    get len(): number;
    insertAt(item: T, idx: number): void;
    remove(item: T): T | undefined;
    removeAt(idx: number): T | undefined;
    append(item: T): void;
    prepend(item: T): void;
    get(idx: number): T | undefined;
}
