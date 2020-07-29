/*
    Copyright (C) 2018-2020 Mislav Blažević

    This file is part of dagmatch.

    dagmatch is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.
*/
#ifndef LPINT_H
#define LPINT_H

#include "LP.h"

typedef tuple<int, int> ii;

class LPInt : public LP
{
public:
    LPInt(Graph& t1, Graph& t2, vector<vd>& matrix);

    virtual void Solve(string filename) override;
private:
    bool CC(const ii& a, const ii& b) const;
    void AddConstraint(const ii& a, const ii& b);
    virtual void SolveLP() override;
};

#endif
