#include "./include/main.h"
#include <stdlib.h>
#include <stdio.h>
//=========================================================
struct TEntity
{
    int m_id;
    int m_parent_id;
    char name;

};
//===========================================================
void onEntityCreation(int aSignalType, void *aSignaInfo, void *aUserdata)
{

}
//=============================================================
void Raptor_SendMessage(struct TEntity *ASender, struct TEntity *AReceiver)
{


}
//============================================================
void DisplayEntity(struct TEntity * AEntity)
{
    printf("Entity ID: %d\n", AEntity->m_id);
    printf("Entity Parent ID: %d\n", AEntity->m_parent_id);
    printf("Entity Name: %c\n", AEntity->name);
}
//=============================================================
int main(char *argc, int argv)
{
    int *p1 = malloc(10*sizeof *p1);
    free(p1);
    int *p2 = calloc(10, sizeof *p2);
    int *p3 = realloc(p2, 1000*sizeof *p3);
    if (p3)
        free(p3);
        
    else
        free(p2);
    struct TEntity entity = {100, 105, 'Q'};
    DisplayEntity(&entity);
    char text[] = "This is simple C string array....Nothing fancy here...";
    printf("%s", text);

    return 0;
}


