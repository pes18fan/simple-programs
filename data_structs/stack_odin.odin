package stack

import "core:fmt"

Node :: struct ($T: typeid) {
    value: T,
    prev: Maybe(^Node(T)),
}

Stack :: struct ($T: typeid) {
    head: Maybe(^Node(T)),
    len: int,
}

push_stack :: proc (s: ^Stack($T), value: T) {
    node := new(Node(T))
    node.value = value
    node.prev = nil

    if _, ok := s.head.?; !ok {
        s.head = node
        return
    }

    hed := s.head.?
    s.head = node
    s.head.?.prev = hed
    s.len += 1
}

pop_stack :: proc (s: ^Stack($T)) -> Maybe(T) {
    if _, ok := s.head.?; !ok {
        return nil
    }

    hed := s.head.?
    hed_val := hed.value
    s.head = s.head.?.prev
    free(hed)
    s.len -= 1

    return hed_val
}

peek_stack :: proc (s: ^Stack($T)) -> Maybe(T) {
    if _, ok := s.head.?; !ok do return nil

    return s.head.?.value
}

init_stack :: proc ($T: typeid) -> Stack(T) {
    return Stack {
        head = nil,
        len = 0,
    }
}

delete_stack :: proc (s: ^Stack($T)) {
    for _, ok := s.head.?; ok; {
        pop_stack(s)
    }
}

main :: proc () {
    stuff: Stack(int)

    push_stack(&stuff, 1)
    push_stack(&stuff, 2)

    fmt.println(
        peek_stack(&stuff).? or_else 69420)
    
    pop_stack(&stuff)
    pop_stack(&stuff)
    if _, ok := pop_stack(&stuff).?; !ok {
        fmt.println("How you gonna pop an empty stack bruv\n");
    }

    delete_stack(&stuff)
}
