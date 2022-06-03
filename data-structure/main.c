
#define int MAX_SIZE = 50;

typedef int ElemType;

typedef struct
{
    ElemType data[MAX_SIZE];
    int length;
} SqList;

void InitList(SqList *L)
{
    L->length = 0;
}

// create
bool InsertList(SqList *L, ElemType e, int index)
{
    if (L->length >= MAX_SIZE)
        return false;

    if (index < 1 || index > L->length)
        return false;

    for (int i = L->length; i >= index; i--)
    {
        L->data[i] = L->data[i - 1];
    }

    L->data[index - 1] = e;
    L.length++;

    return true;
}

// delete
void DeleteValue(SqList *L, ElemType e)
{
    if (L->length < 1)
    {
        return false;
    }

    bool move = false;
    for (int i = 0; i < L->length; i++)
    {
        if (move)
        {
            L->data[i - 1] = L->data[i];
        }
        if (L->data[i] == e)
        {
            move = true;
        }
    }

    if (move)
    {
        L->length--;
    }
}

void DeleteIndex(SqList *L, int index)
{
    if (index < 1 || index > L->length)
}

// select
// 位置是从1开始的
int LocateElem(SqList *L, ElemType e)
{
    for (int i = 0; i < L.length; i++)
    {
        if (L.data[i] == e)
        {
            return i + 1;
        }
    }
    return 0;
}

bool GetElem(SqList *L, int index, ElemType *e)
{
    if (index > L->length)
    {
        return fasle;
    }
}

int Length(SqList *L)
{
    return L->length;
}

// destroy
void DestroyList(SqList *L)
{
}

// print
void Print(SqList *L)
{
    for (int i = 0; i < L.lenght; i++)
    {
        printf("%d", L->data[i]);
    }
}

void main()
{
    SqList *L;
    InitList(L);
}