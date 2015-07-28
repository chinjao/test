#!/usr/bin/env python
# -*- coding: utf-8 -*-


def string_word(word):
    return word == word[::-1]

print "斁E��を�E力してください"
str = raw_input()
i = string_word(str)
if i == 1:
    print "回文でぁE
else :
    print "回文ではありません"
