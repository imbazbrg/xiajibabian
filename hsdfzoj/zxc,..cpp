/* 顺序队列接口定义头文件*/
#define true 1
#define false 0
/* 队的最大长度 */
#define MAX_QUEUE_SIZE 100
/* 队列的数据类型 */
typedef int datatype;
/* 静态链的数据结构 */
typedef struct queue{
    datatype sp_queue_array[MAX_QUEUE_SIZE];
    /* 队头 */
    int front;
    /* 队尾 */
    int rear;
}sp_queue;
/* 静态顺序链的接口定义 */
/* 静态链的初始化 */
sp_queue queue_init();
/* 判断队列是否为空,若为空
 * 返回true
 * 否则返回false
*/
int queue_empty(sp_queue q);
/* 插入元素e为队q的队尾新元素/
 * 插入成功返回true
 * 队满返回false
*/
int queue_en(sp_queue *q, datatype e);
/* 队头元素出队
 * 用e返回出队元素,并返回true
 * 若队空返回false
*/
int queue_de(sp_queue *q, datatype *e);
/* 清空队 */
void queue_clear(sp_queue *q);
/* 获得队头元素
 * 队列非空,用e返回队头元素,并返回true
 * 否则返回false
*/
int get_front(sp_queue, datatype *e );
/* 获得队长 */
int queue_len(sp_queue q);
/* 遍历队 */
void queue_traverse(sp_queue q, void(*visit)(sp_queue q));
void visit(sp_queue s);
/* 接口实现文件 */
#include<stdio.h>
#include<stdlib.h>

sp_queue queue_init()
{
    sp_queue q;
    q.front = q.rear = 0;
    return q;
}
int queue_empty(sp_queue q)
{
    return q.front == q.rear;
}
int queue_en(sp_queue *q, datatype e)
{
    /* 队满 */
    if (q -> rear == MAX_QUEUE_SIZE)
        return false;

    /* 入队 */
    q -> sp_queue_array[q -> rear] = e;
    printf("q.sp_queue_array[%d]=%d\n", q -> rear, e);
    q -> rear += 1;
    return true;

}
int queue_de(sp_queue *q, datatype *e)
{
    /* 队空 */
    if(queue_empty(*q))
        return false;

    /* 出队 */
    q -> rear -= 1;
    *e = q -> sp_queue_array[q -> rear];
    return true;
}
void queue_clear(sp_queue *q)
{
    q -> front = q -> rear = 0;
}
int get_front(sp_queue q, datatype *e)
{
    /* 队空 */
    if(q.front == q.rear)
        return false;

    /* 获取队头元素 */
    *e = q.sp_queue_array[q.front];
    return true;
}
int queue_len(sp_queue q)
{
    return (q.rear - q.front);
}


void queue_traverse(sp_queue q, void (*visit)(sp_queue q))
{
    visit(q);
}

void visit(sp_queue q)
{
    /* 队空 */
    if (q.front == q.rear)
        printf("队列为空\n");

    int temp = q.front;
    while(temp != q.rear)
    {
        printf("%d ",q.sp_queue_array[temp]);
        temp += 1;
    }
    printf("\n");
}
int main()
{
    sp_queue q = queue_init();
    queue_en(&q, 1);
    queue_en(&q, 2);
    printf("length=%d\n", queue_len(q));
    queue_en(&q, 3);
    printf("length=%d\n", queue_len(q));
    queue_en(&q, 4);
    printf("length=%d\n", queue_len(q));
    queue_en(&q, 5);
    printf("length=%d\n", queue_len(q));
    queue_en(&q, 6);
    printf("length=%d\n", queue_len(q));
    queue_traverse(q,visit);
    datatype *e = (datatype *)malloc(sizeof(*e));
    queue_de(&q,e);
    printf("queue_de(),e=%d length=%d\n", *e, queue_len(q));
    queue_traverse(q, visit);
    queue_clear(&q);
    queue_traverse(q, visit);
    printf("length:%d\n", queue_len(q));
}

