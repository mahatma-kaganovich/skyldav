/* 
 * File:  StringSet.h
 * 
 * Copyright 2013 Heinrich Schuchardt <xypron.glpk@gmx.de>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *   http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

/**
 * @file StringSet.h
 * @brief Set of strings.
 */

#ifndef STRINGSET_H
#define	STRINGSET_H

#include <set>
#include <string>
#include <cstring>

/**
 * Compares two strings.
 */
struct StringComperator {
public:
    /**
     * Compares two terms.
     * @param left_term left term
     * @param right_term right term
     * @return 
     */
    bool operator() (std::string *value1, std::string *value2) const {
        return value1->compare(*value2);
    }
};

typedef std::set<std::string *, StringComperator> _StringSetInternal;

class StringSet {
public:
    StringSet();
    void add(char *value);
    int find(char *value);
    virtual ~StringSet();
private:
    _StringSetInternal strings;
};

#endif	/* STRINGSET_H */

