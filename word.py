#!/usr/bin/env python
# -*- coding: utf-8 -*-


def string_word(word):
    return word == word[::-1]

print "ζE« γεEεγγ¦γγ γγ"
str = raw_input()
i = string_word(str)
if i == 1:
    print "εζγ§γE
else :
    print "εζγ§γ―γγγΎγγ"
