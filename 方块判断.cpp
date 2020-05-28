bool JudgeLeft(Map A)
{
    if (type == 0)
    {
        switch (state) :
        {
        case 0:if (A.map[y + 1][x - 1] == 0 && A.map[y + 2][x - 1] == 0)left = 1; else left = 0; break;
        case 1:if (A.map[y][x - 1] == 0 && A.map[y + 1][x] == 0 && A.map[y + 2][x] == 0)left = 1; else left = 0; break;
        case 2:if (A.map[y + 1][x + 1] == 0 && A.map[y + 2][x - 1] == 0)left == 1; else left = 0; break;
        case 3:if (A.map[y][x] == 0 && A.map[y + 1][x] == 0 && A.map[y + 2][x] == 0)left = 1; else left = 0; break;
        default:break;
        }
    }
    if (type == 1)
    {
        switch (state)
        {
        case 0:if (A.map[y + 1][x - 1] == 0 && A.map[y + 2][x + 1] == 0)left = 1; else left = 0; break;
        case 1:if (A.map[y][x] == 0 && A.map[y + 1][x] == 0 && A.map[y + 2][x - 1] == 0)left = 1; else left = 0; break;
        case 2:if (A.map[y + 1][x - 1] == 0 && A.map[y + 2][x - 1] == 0)left = 1; else left = 0; break;
        case 3:if (A.map[y][x] == 0 && A.map[y + 1][x] == 0 && A.map[y + 2][x] == 0)left = 1; else left = 0; break;
        default:break;
        }
    }
    if (type == 2)
    {
        switch (state)
        {
        case 0:if (A.map[y + 1][x] == 0 && A.map[y + 2][x - 1] == 0)left = 1; else left = 0; break;
        case 1:if (A.map[y][x] == 0 && A.map[y + 1][x] == 0 && A.map[y + 2][x] == 0)left = 1; else left = 0; break;
        case 2:if (A.map[y + 1][x - 1] == 0 && A.map[y + 2][x] == 0)left = 1; else left = 0; break;
        case 3:if (A.map[y][x] == 0 && A.map[y + 1][x - 1] == 0 && A.map[y + 2][x] == 0)left = 1; else left = 0; break;
        default:break;
        }
    }
    if (type == 3)
    {
        switch (state)
        {
        case 0:if (A.map[y + 1][x - 1] == 0 && A.map[y + 2][x] == 0)left = 1; else left = 0; break;
        case 2:if (A.map[y + 1][x - 1] == 0 && A.map[y + 2][x] == 0)left = 1; else left = 0; break;
        case 1:if (A.map[y][x + 1] == 0 && A.map[y + 1][x] == 0 && A.map[y + 2][x] == 0)left = 1; else left = 0; break;
        case 3:if (A.map[y][x + 1] == 0 && A.map[y + 1][x] == 0 && A.map[y + 2][x] == 0)left = 1; else left = 0; break;
        default:break;
        }
    }
    if (type == 4)
    {
        switch (state)
        {
        case 0:if (A.map[y + 1][x] == 0 && A.map[y + 2][x - 1] == 0)left = 1; else left = 0; break;
        case 2:if (A.map[y + 1][x] == 0 && A.map[y + 2][x - 1] == 0)left = 1; else left = 0; break;
        case 1:if (A.map[y][x] == 0 && A.map[y + 1][x] == 0 && A.map[y + 2][x + 1] == 0)left == 1; else left = 0; break;
        case 3:if (A.map[y][x] == 0 && A.map[y + 1][x] == 0 && A.map[y + 2][x + 1] == 0)left == 1; else left = 0; break;
        default:break;
        }
    }
    if (type == 5)
    {
        switch (state)
        {
        case 0:if (A.map[y + 2][x - 1] == 0)left = 1; else left = 0; break;
        case 2:if (A.map[y + 2][x - 1] == 0)left = 1; else left = 0; break;
        case 1:if (A.map[y][x] == 0 && A.map[y + 1][x] == 0 && A.map[y + 2][x] == 0 && A.map[y + 3][x] == 0)left = 1; else left = 0; break;
        case 3:if (A.map[y][x] == 0 && A.map[y + 1][x] == 0 && A.map[y + 2][x] == 0 && A.map[y + 3][x] == 0)left = 1; else left = 0; break;
        default:break;
        }
    }
    if (type == 6)
    {
        if (A.map[y][x - 1] == 0 && A.map[y + 1][x - 1] == 0)left = 1; else left = 0; break;
    }
}
bool JudgeRight(Map A)
{
    if (type == 0)
    {
        switch (state) :
        {
        case 0:if (A.map[y + 1][x + 3] == 0 && A.map[y + 2][x + 1] == 0)right = 1; else right = 0; break;
        case 1:if (A.map[y][x + 2] == 0 && A.map[y + 1][x + 2] == 0 && A.map[y + 2][x + 2] == 0)right = 1; else right = 0; break;
        case 2:if (A.map[y + 1][x + 3] == 0 && A.map[y + 2][x + 3] == 0)right = 1; else right = 0; break;
        case 3:if (A.map[y][x + 2] == 0 && A.map[y + 1][x + 2] == 0 && A.map[y + 2][x + 3] == 0)right = 1; else right = 0; break;
           default:break;
        }
    }
    if (type == 1)
    {
        switch (state)
        {
        case 0:if (A.map[y + 1][x + 3] == 0 && A.map[y + 2][x + 3] == 0)right = 1; else right = 0; break;
        case 1:if (A.map[y][x + 2] == 0 && A.map[y + 1][x + 2] == 0 && A.map[y + 2][x + 2] == 0)right = 1; else right = 0; break;
        case 2:if (A.map[y + 1][x + 1] == 0 && A.map[y + 2][x + 3] == 0)right = 1; else right = 0; break;
        case 3:if (A.map[y][x + 3] == 0 && A.map[y + 1][x + 2] == 0 && A.map[y + 2][x + 2] == 0)right = 1; else right = 0; break;
                default:break;
        }
    }
    if (type == 2)
    {
        switch (state)
        {
        case 0:if (A.map[y + 1][x + 2] == 0 && A.map[y + 2][x + 3] == 0)right = 1; else right = 0; break;
        case 1:if (A.map[y][x + 2] == 0 && A.map[y + 1][x + 3] == 0 && A.map[y + 2][x + 2] == 0)right = 1; else right = 0; break;
        case 2:if (A.map[y + 1][x + 3] == 0 && A.map[y + 2][x + 2] == 0)right = 1; else right = 0; break;
        case 3:if (A.map[y][x + 2] == 0 && A.map[y + 1][x + 2] == 0 && A.map[y + 2][x + 2] == 0)right = 1; else right = 0; break;
                default:break;
        }
    }
    if (type == 3)
    {
        switch (state)
        {
        case 0:if (A.map[y + 1][x + 2] == 0 && A.map[y + 2][x + 3] == 0)right = 1; else right = 0; break;
        case 2:if (A.map[y + 1][x + 2] == 0 && A.map[y + 2][x + 3] == 0)right = 1; else right = 0; break;
        case 1:if (A.map[y][x + 3] == 0 && A.map[y + 1][x + 3] == 0 && A.map[y + 2][x + 2] == 0)right = 1; else right = 0; break;
        case 3:if (A.map[y][x + 3] == 0 && A.map[y + 1][x + 3] == 0 && A.map[y + 2][x + 2] == 0)right = 1; else right = 0; break;
        default:break;
        }
    }
    if (type == 4)
    {
        switch (state)
        {
        case 1:if (A.map[y][x + 2] == 0 && A.map[y + 1][x + 3] == 0 && A.map[y + 2][x + 3] == 0)right = 1; else right = 0; break;
        case 3:if (A.map[y][x + 2] == 0 && A.map[y + 1][x + 3] == 0 && A.map[y + 2][x + 3] == 0)right = 1; else right = 0; break;
        case 0:if (A.map[y + 1][x + 3] == 0 && A.map[y + 2][x + 2] == 0)right = 1; else right = 0; break;
        case 2:if (A.map[y + 1][x + 3] == 0 && A.map[y + 2][x + 2] == 0)right = 1; else right = 0; break;
        default:break;
        }
    }
    if (type == 5)
    {
        switch (state)
        {
        case 0:if (A.map[y + 2][x + 4] == 0)right = 1; else right = 0; break;
        case 2:if (A.map[y + 2][x + 4] == 0)right = 1; else right = 0; break;
        case 1:if (A.map[y][x + 2] == 0 && A.map[y + 1][x + 2] == 0 && A.map[y + 2][x + 2] == 0 && A.map[y + 3][x + 2] == 0)right = 1; else right = 0; break;
        case 3:if (A.map[y][x + 2] == 0 && A.map[y + 1][x + 2] == 0 && A.map[y + 2][x + 2] == 0 && A.map[y + 3][x + 2] == 0)right = 1; else right = 0; break;
               default:break;
        }
    }
    if (type == 6)
    {
        if (A.map[y][x + 2] == 0 && A.map[y + 1][x + 2] == 0)right = 1; else right = 0; break;
    }
}
bool JudgeDown(Map A)
{
    if (type == 0)
    {
        switch (state) :
        {
        case 0:if (A.map[y + 3][x] == 0 && A.map[y + 2][x + 1] == 0 && A.map[y + 2][x + 2] == 0)down = 1; else down = 0; break;
        case 1:if (A.map[y + 1][x] == 0 && A.map[y + 3][x + 1] == 0)down = 1; else down = 0; break;
        case 2:if (A.map[y + 3][x] == 0 && A.map[y + 3][x + 1] == 0 && A.map[y + 3][x + 2] == 0)down = 1; else down = 0; break;
        case 3:if (A.map[y + 3][x + 1] == 0 && A.map[y + 3][x + 2] == 0)down = 1; else down = 0; break;
        default:break;
        }
    }
    if (type == 1)
    {
        switch (state)
        {
        case 0:if (A.map[y + 2][x] == 0 && A.map[y + 2][x + 1] == 0 && A.map[y + 3][x + 2] == 0)down = 1; else down = 0; break;
        case 1:if (A.map[y + 3][x] == 0 && A.map[y + 3][x + 1] == 0)down = 1; else down = 0; break;
        case 2:if (A.map[y + 3][x] == 0 && A.map[y + 3][x + 1] == 0 && A.map[y + 3][x + 2] == 0)down = 1; else down = 0; break;
        case 3:if (A.map[y + 3][x + 1] == 0 && A.map[y + 1][x + 2] == 0)down = 1; else down = 0; break;
        default:break;
        }
    }
    if (type == 2)
    {
        switch (state)
        {
        case 0:if (A.map[y + 3][x] == 0 && A.map[y + 3][x + 1] == 0 && A.map[y + 3][x + 2] == 0)down = 1; else down = 0; break;
        case 1:if (A.map[y + 3][x + 1] == 0 && A.map[y + 2][x + 2] == 0)down = 1; else down = 0; break;
        case 2:if (A.map[y + 2][x] == 0 && A.map[y + 2][x + 3] == 0 && A.map[y + 3][x + 1] == 0)down = 1; else down = 0; break;
        case 3:if (amp[y + 2][x] == 0 && A.map[y + 3][x + 1] == 0)down = 1; else down = 0; break;
        default:break;
        }
    }
    if (type == 3)
    {
        switch (state)
        {
        case 0:if (A.map[y + 2][x] == 0 && A.map[y + 3][x + 1] == 0 && A.map[y + 3][x + 2] == 0)down = 1; else down = 0; break;
        case 2:if (A.map[y + 2][x] == 0 && A.map[y + 3][x + 1] == 0 && A.map[y + 3][x + 2] == 0)down = 1; else down = 0; break;
        case 1:if (A.map[y + 2][x + 2] == 0 && A.map[y + 3][x + 1] == 0)down = 1; else down = 0; break;
        case 3:if (A.map[y + 2][x + 2] == 0 && A.map[y + 3][x + 1] == 0)down = 1; else down = 0; break;
       default:break;
        }
    }
    if (type == 4)
    {
        switch (state)
        {
        case 0:if (A.map[y + 2][x + 2] == 0 && A.map[y + 3][x] == 0 && A.map[y + 3][x + 1] == 0)down = 1; else down = 0; break;
        case 2:if (A.map[y + 2][x + 2] == 0 && A.map[y + 3][x] == 0 && A.map[y + 3][x + 1] == 0)down = 1; else down = 0; break;
        case 1:if (A.map[y + 2][x + 1] == 0 && A.map[y + 3][x + 2] == 0)down = 1; else down = 0; break;
        case 3:if (A.map[y + 2][x + 1] == 0 && A.map[y + 3][x + 2] == 0)down = 1; else down = 0; break;
        default:break;
        }
    }
    if (type == 5)
    {
        switch (state)
        {
        case 0:if (A.map[y + 3][x] == 0 && A.map[y + 3][x + 1] == 0 && A.map[y + 3][x + 2] == 0 && A.map[y + 3][x + 3] == 0)down = 1; else down = 0; break;
        case 2:if (A.map[y + 3][x] == 0 && A.map[y + 3][x + 1] == 0 && A.map[y + 3][x + 2] == 0 && A.map[y + 3][x + 3] == 0)down = 1; else down = 0; break;
        case 1:if (A.map[y + 4][x + 1] == 0)down = 1; else down = 0; breeak;
        case 3:if (A.map[y + 4][x + 1] == 0)down = 1; else down = 0; breeak;
        default:break;
        }
    }
    if (type == 6)
    {
        if (A.map[y + 2][x] == 0 && A.map[y + 2][x + 1] == 0)down = 1; else down = 0; break;
    }
}
bool JudgeTrans(Map A)
{
    if (type == 0)
    {
        switch (state) :
        {
        case 0:if (A.map[y][x] == 0 && A.map[y][x + 1] == 0 && A.map[y + 2][x + 1] == 0)trans = 1; else trans = 0; break;
        case 1:if (A.map[y + 2][x] == 0 && A.map[y + 2][x + 2] == 0 && A.map[y + 1][x + 2] == 0)trans = 1; else trans = 0; break;
        case 2:if (A.map[y + 1][x + 1] == 0 && A.map[y][x + 1] == 0)trans = 0; else trans = 0; break;
        case 3:if (A.map[y + 1][x] == 0 && A.map[y + 2][x] == 0 && A.map[y + 1][x + 2] == 0)trans = 1; else trans = 0; break;
        default:break;
        }
    }
    if (type == 1)
    {
        switch (state)
        {
        case 0:if (A.map[y][x + 1] == 0 && A.map[y + 2][x] == 0 && A.map[y + 2][x + 1] == 0)trans = 1; else trans = 0; break;
        case 1:if (A.map[y + 2][x + 2] == 0 && A.map[y + 2][x + 3] == 0)trans = 1; else trans = 0; break;
        case 2:if (A.map[y][x + 1] == 0 && A.map[y][x + 2] == 0 && A.map[y + 1][x + 1] == 0)trans = 1; else trans = 0; break;
        case 3:if (A.map[y + 1][x] == 0 && A.map[y + 1][x + 2] == 0 && A.map[y + 2][x + 2] == 0)trans = 1; else trans = 0; break;
        default:break;
        }
    }
    if (type == 2)
    {
        switch (state)
        {
        case 0:if (A.map[y][x + 2] == 0 && A.map[y + 1][x + 2] == 0 && A.map[y + 1][x + 3] == 0)trans = 1; else trans = 0; break;
        case 1:if (A.map[y + 1][x] == 0)trans = 1; else trans = 0; break;
        case 2:if (A.map[y][x + 1] == 0)trans = 1; else trans = 0; break;
        case 3:if (A.map[y + 2][x] == 0 && A.map[y + 2][x + 2] == 0)trans = 1; else trans = 0; break;
        default:break;
        }
    }
    if (type == 3)
    {
        switch (state)
        {
        case 0:if (A.map[y][x + 2] == 0 && A.map[y + 1][x + 2] == 0)trans = 1; else trans = 0; break;
        case 2:if (A.map[y][x + 2] == 0 && A.map[y + 1][x + 2] == 0)trans = 1; else trans = 0; break;
        case 1:if (A.map[y + 1][x] == 0 && A.map[y + 2][x + 2] == 0)trans = 1; else trans = 0; break;
        case 3:if (A.map[y + 1][x] == 0 && A.map[y + 2][x + 2] == 0)trans = 1; else trans = 0; break;
        default:break;
        }
    }
    if (type == 4)
    {
        switch (state)
        {
        case 0:if (A.map[y + 2][x + 2] == 0 && A.map[y][x + 1] == 0)trans = 1; else trans = 0; break;
        case 2:if (A.map[y + 2][x + 2] == 0 && A.map[y][x + 1] == 0)trans = 1; else trans = 0; break;
        case 1:if (A.map[y + 2][x] == 0 && A.map[y + 2][x + 1] == 0)trans = 1; else trans = 0; break;
        case 3:if (A.map[y + 2][x] == 0 && A.map[y + 2][x + 1] == 0)trans = 1; else trans = 0; break;
         default:break;
        }
    }
    if (type == 5)
    {
        switch (state)
        {
        case 0:if (A.map[y][x + 1] == 0 && A.map[y + 1][x + 1] == 0 && A.map[y + 3][x + 1] == 0)trans = 1; else trans = 0; break;  
        case 2:if (A.map[y][x + 1] == 0 && A.map[y + 1][x + 1] == 0 && A.map[y + 3][x + 1] == 0)trans = 1; else trans = 0; break;
        case 1:if (A.map[y + 2][x] == 0 && A.map[y + 2][x + 2] == 0 && A.map[y + 2][x + 3] == 0)trans = 1; else trans = 0; break;
        case 3:if (A.map[y + 2][x] == 0 && A.map[y + 2][x + 2] == 0 && A.map[y + 2][x + 3] == 0)trans = 1; else trans = 0; break;
        default:break;
        }
    }
    if (type == 6)
    {
        trans = 1;
    }
}