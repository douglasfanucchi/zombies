#!/bin/bash

function ASSERT_STREQ()
{
if [[ "$1" == "$2" ]];
then
    printf ✅
else
    printf ❌
    echo -en "\nEXPECTED\n$1\n";
    echo -en "_______________________________________________\n";
    echo -en "RESULT\n$2";
fi
}

executable=$1

function test_creates_foo_zombie_and_expect_its_announcement_and_destruction_message()
{
    local expected=$'Foo: BraiiiiiiinnnzzzZ...\n'
         expected+=$'Foo: DyiiiiiiiiiingggG...\n'
         expected+=$'Douglas: BraiiiiiiinnnzzzZ...\n'
         expected+=$'Douglas: DyiiiiiiiiiingggG...'

    local result=$(eval $executable)

    ASSERT_STREQ "$expected" "$result"
}

test_creates_foo_zombie_and_expect_its_announcement_and_destruction_message

printf \\n;