# 《全国青少年信息学奥林匹克系列竞赛大纲》知识点整理

[TOC]

> **课程进度：**
>
> [2.1.2（1）](####1、程序基本概念)—[2.1.4（7）](####7、图论算法)共7部分
>
> [2.1.4（8）](####8、动态规划)—[2.2.3（3）](####3、特殊树)共9部分

## 2.1 入门级

### 2.1.1 基础知识与编程环境

### 2.1.2 C++ 程序设计

#### 1、程序基本概念

##### 编辑、编译、解释、调试的概念

###### 编辑

编辑是指编写程序代码的过程。程序员使用文本编辑器或集成开发环境（IDE）来创建、编辑和保存程序源代码文件。在编辑代码时，程序员可以使用代码补全、语法高亮、代码折叠等功能来提高效率。

```
IDE：
集成开发环境，一般包括代码编辑器、编译器、调试器和图形用户界面工具。集成了代码编写功能、分析功能、编译功能、调试功能等一体化的开发软件服务套。所有具备这一特性的软件或者软件套(组)都可以叫集成开发环境。

每种编程语言都有一些特定的IDE，如学习C/C++/C# 推荐微软强大的Visual Studio系列，CodeBlocks等；学习JAVA推荐Eclipse，IntelliJ Idea和NetBeans等；学习Python 推荐 PyCharm，WingIDE，python官方支持的集成开发环境idle（轻量级）等。
```

###### 编译

编译是将程序源代码转换为可执行文件的过程。**编译器**是用于执行编译过程的工具，它将源代码转换为机器代码，这些机器代码可以在计算机上执行。编译器通常会进行词法分析、语法分析、语义分析等操作来检查代码的正确性，并生成可执行代码。

```
编译器：
把源代码转换成（翻译）低级语言的程序，一个现代编译器的主要工作流程：源代码 (source code) → 预处理器 (preprocessor) → 编译器 (compiler) → 目标代码 (object code) → 链接器 (Linker) → 可执行程序 (executables)。
常用编译器如Dev-C++，WIN-TC，TurboC，MinGW等。
源代码一般为高级语言 (High-level language)， 如Pascal、C、C++、Java、汉语编程等或汇编语言，而目标则是机器语言的目标代码，有时也称机器代码。
一句话描述编译与解释
编译：将一种语言（源码）转换成另一种语言（目标代码/计算机代码），发生在运行之前，产物是「另一份代码」，交给别人执行。
解释：把程序源代码一行一行的读懂然后执行，发生在运行时，产物是「运行结果」。
```

<img src="讲义.assets/image-20240621201901008.png" alt="image-20240621201901008" style="zoom:50%;" />

###### 解释

解释是将程序代码**逐行**转换为机器代码并立即执行的过程。解释器是执行解释过程的工具，它可以直接读取源代码文件，逐行解释并执行代码。解释器可以在不需要编译的情况下执行代码，但解释的速度通常比编译的速度慢。

```
解释器：
直接把高级编程语言一行一行转译运行，重点是不会一次把整个程序转译出来，因此运行速度比较缓慢，它每转译一行程序就立刻运行，然后再转译下一行，再运行，如此不停地进行下去。
```

###### 调试

调试是在程序运行时查找和修复错误的过程。调试器是用于执行调试过程的工具，它可以在程序运行时暂停执行、检查变量值、跟踪函数调用等。调试器可以帮助程序员定位并修复程序中的错误，提高程序的质量和可靠性。

> https://yncoders.com/show/73
> https://www.bilibili.com/read/cv13258034/

#### 2、基本数据类型

#### 3、程序基本语句

#### 4、基本运算

#### 5、数学库常用函数

```c++
#include <cmath>
```

##### 绝对值函数、四舍五入函数、下取整函数、 上取整函数、平方根函数、常用三角函数、对数函数、指数函数

###### 绝对值函数 `abs(x)`

功能：返回参数 x 的绝对值。

```c++
int a = -5;
int b = abs(a);// b=5
double c = -5.2;
double d = abs(c)//d=5.2
```

###### 四舍五入函数 `round(x)`

功能：返回参数 x 的四舍五入值。

```c++
double a = 3.4;
double b = 3.6;
int c = round(a);// c=3
int d = round(b);// d=4
```

###### 下取整函数 `floor(x)`

功能：返回不大于参数 x 的最大整数。

```c++
double a = 3.4;
double b = 3.6;
int c = floor(a);// c=3
int d = floor(b);// d=3
```

###### 上取整函数 `ceil(x)`

功能：返回不小于参数 x 的最小整数。

```c++
double a = 3.4;
double b = 3.6;
int c = ceil(a);// c=4
int d = ceil(b);// d=4
```

###### 平方根函数 `sqrt(x)` 

功能：表示求一个数的平方根。

```c++
double x = 4.0;
double y = sqrt(x);//计算 4 的平方根
```

###### 常用三角函数

在直角三角形中，当平面上的三点A、B、C的连线，AB、AC、BC，构成一个 直角三角形，其中∠ACB为 直角。对∠BAC而言， 对边(opposite)a=BC、 斜边(hypotenuse)c=AB、邻边(adjacent)b=AC，则存在以下关系：

| 基本函数   | 英文         | 缩写     | c++函数                      | 表达式（$\theta$为∠A的角度（弧度制）） | 语言描述             |
| ---------- | ------------ | -------- | ---------------------------- | -------------------------------------- | -------------------- |
| 正弦函数   | *sine*       | *sin*    | sin(x)                       | $sin(\theta) = a/c$                    | ∠A的对边比斜边       |
| 余弦函数   | *cosine*     | *cos*    | cos(x)                       | $cos(\theta) = b/c$                    | ∠A的邻边比斜边       |
| 正切函数   | *tangent*    | *tan*    | tan(x)                       | $tan(\theta) = a/b$                    | ∠A的对边比邻边       |
| 余切函数   | *cotangent*  | *cot*    | pow(tan(x) , -1) or 1/tan(x) | $cot(\theta) =b/a$                     | ∠A的邻边比对边       |
| 正割函数   | *secant*     | *sec*    | pow(cos(x) , -1) or 1/cos(x) | $sec(\theta) = c/b$                    | ∠A的斜边比邻边       |
| 余割函数   | *cosecant*   | *csc*    | pow(sin(x) , -1) or 1/sin(x) | $csc(\theta) = c/a$                    | ∠A的斜边比对边       |
| 反正弦函数 | *arcsine*    | *arcsin* | asin(x)                      | $\theta=arcsin(a/c)$                   | 求解给定正弦值的角度 |
| 反余弦函数 | *arccosine*  | *arccos* | acos(x)                      | $\theta=arccos(b/c)$                   | 求解给定余弦值的角度 |
| 反正切函数 | *arctangent* | *arctan* | atan(x)                      | $\theta=arctan(a/b)$                   | 求解给定正切值的角度 |

<img src="讲义.assets/image-20240621204808530.png" alt="image-20240621204808530" style="zoom:50%;" />

```c++
double x = 1.0;//弧度制
double y = sin(x);// 计算 sin(x) 
double z = tan(x);// 计算 tan(x)
```

###### 对数函数

`log`：自然对数

`log10`：以 10 为底的对数

`log2` ：以 2 为底的对数

```c++
double x = 10.0;
double b = log(x);//计算 ln(x)
double c = log10(x);// 计算 log10(x)
double d = log2(x);// 计算 log2(x)
```

###### 指数函数

`exp(x)`：计算自然指数函数 e^x 的值（e 约等于 2.71828）。

`pow(base, exponent)`：计算 base 的 exponent 次幂的值。

`exp2(x)`：计算 2 的 x 次幂的值。

`pow(base, 0.5)`：计算 base 的平方根。

```C++
double x = 1.0;
double y = exp(x);// 计算 e^x
```

> https://blog.csdn.net/chaotiantian/article/details/115029466
> https://baike.baidu.com/item/%E5%BC%A7%E5%BA%A6%E5%88%B6/3315973

#### 6、结构化程序设计

#### 7、数组

#### 8、字符串的处理

#### 9、函数与递归

#### 10、结构体与联合体

#### 11、指针类型

#### 12、文件及基本读写

#### 13、STL 模板

##### 栈 (stack)、队列 (queue)、链表 (list)、向量（vector）等容器

详细打开[C++提高编程.pdf](./C++提高编程.pdf)

### 2.1.3 数据结构

### 2.1.4 算法

#### 1、算法概念与描述

##### 算法描述：自然语言描述、流程图描述、伪代码描述

###### 自然语言描述

通过自然语言来描述算法的步骤和操作。

例如，冒泡排序算法的自然语言描述：

从数组的第一个元素开始，依次比较相邻的两个元素，如果前一个元素大于后一个元素，则交换它们的位置，直到将最大的元素移动到数组的最后一个位置。重复上述操作，直到所有元素都排好序为止。

###### 流程图描述

通过图形化方式来表示算法的步骤和操作。

例如，冒泡排序算法的流程图描述：

<img src="讲义.assets/image-20240622101837410.png" alt="image-20240622101837410" style="zoom:50%;" />

流程图中图形的表示含义

<img src="讲义.assets/image-20240622102034214.png" alt="image-20240622102034214" style="zoom:50%;" />

###### 伪代码描述

通过一种类似编程语言的语法来描述算法的步骤和操作。伪代码通常比自然语言描述更具体和精确。

例如，冒泡排序算法的伪代码描述：

```c++
procedure bubbleSort(A : list of sortable items)
    n = length(A)
    repeat
        swapped = false
        for i = 1 to n-1 do
            if A[i] > A[i+1] then
                swap(A[i], A[i+1])
                swapped = true
            end if
        end for
        n = n - 1
    until not swapped
end procedure
```

以上三种方式都可以用来描述算法，它们**各有优缺点**，选择哪种方式主要取决于具体情况和个人偏好。在实践中，通常使用**自然语言描述和伪代码**描述来表示算法。

#### 2、入门算法

#### 3、基础算法

##### 倍增法（binary lifting）

介绍：倍增法（binary lifting），顾名思义就是翻倍。它能够使线性的处理转化为对数级的处理，大大地优化时间复杂度。这个方法在很多算法中均有应用，其中最常用的是 RMQ 问题和求 LCA（最近公共祖先）。倍增”与“二进制划分”两个思想相互结合，降低了求解很多问题的时间与空间复杂度。快速幂其实就是“倍增”与“二进制划分”思想的一种体现。其他应用还有，序列上的倍增问题，求解RMQ（区间最值）问题的ST算法，求解最近公共祖先（LCA）等。

基本用法：

倍增主要用途是为了**查找单调数据组中某一数值**。

比如：在一个数组a {2,5,7,11,19} 中查找最大的小于12的数字。

（1）朴素做法：从第一个数开始，一个一个往后枚举，查找。

（2）二分做法：每次将数列分割一半判断，并且进一步查找子区间。

（3）倍增做法：设定一个增长长度 p 和已确定长度 l，现在要确定 a[l+p] 是否满足条件，若满足条件（比12小），则p成2倍增长；否则 p 缩小范围（试着缩小范围判断条件）。

```c++
l=0;
p=1;
while(p){//如果还能扩增范围(l)就继续
    if(a[l+p]<12){
        l+=p;//增加已知范围
        p<<=1//成倍增长，相当于p*=2
    }
    else{
        p>>=1;//缩小范围
    }
}
cout<<a[l];
```

倍增算法一般比较稳定，时间 O(logn)。

###### ST算法

```
ST算法(Sparse Table algorithm, ST)的基本步骤如下:
1、预处理:
    创建一个二维数组dp,其中dp[i][j]表示从下标i开始长度为2^j的区间内的最大值(或最小值)。
    通过动态规划的方式计算dp数组。对于任意i和j,dp[i][j] = max(dp[i][j-1], dp[i+2^(j-1)][j-1])(或最小值)。
    这样可以在O(nlogn)的时间内预处理完dp数组。
2、查询:
    给定一个查询区间[l, r],我们可以找到一个最大的k,使得2^k <= r-l+1。
    此时,区间[l, r]可以被分解为两个长度为2^k的区间,即[l, l+2^k-1]和[r-2^k+1, r]。
    查询这两个区间的最大值(或最小值),取其中的较大值(或较小值)即可。这个过程只需O(1)的时间复杂度。
```

###### 最近公共祖先（LCA）

```
最近公共祖先(Lowest Common Ancestor, LCA)

给定一颗有根树，若节点 z 既是节点 x 的祖先，也是节点 y 的祖先，则称 z 是 x，y 的公共祖先。在 x，y 的所有共公共祖先中，深度最大的一个称为 x，y 的最近公共祖先，记为 LCA(x,y)。

LCA(x,y) 是 x 到根的路径与 y 到根的路径的交汇点，它也是 x 与 y 之间的路径上深度最小的节点。

这里着重介绍树上倍增法求LCA。

树上倍增法是一个很重要的算法。除了求 LCA 之外，它在很多问题中都有广泛应用。设 F[x,k] 表示 x 的 2^k 辈祖先，即从 x 向根节点走 2^k 步到达的节点。特别地，若该节点不存在，则令 F[x,k] = 0. F[x,0] 就是 x 的父节点。除此之外，任意k∈[1,log n]，F[x,k]=F[F[x,k-1],k-1]。

这类似于一个动态规划的过程，“阶段”就是节点的深度。因此，我们可以对树进行广度优先遍历，按照层次顺序，在节点入队之前，计算它在F数组中相应的值。

以上部分是预处理，时间复杂度为O(nlogn)，之后可以多次对不同的 x，y 计算 LCA，每次询问的时间复杂度为 O(logn)。

基于F数组计算 LCA(x,y) 分为以下几步：

设 d[x] 表示 x 的深度。不妨设 d[x]≥d[y]（否则交换 x，y）

用二进制拆分思想，把 x 向上调整到与 y 同一深度。具体来说，就是依次尝试从 x 向上走      k = 2^logn,...,2^1,2^1步，检查到达的节点是否比 y 深。在每次检查中，若是，则令 x=F[x,k]

若此时 x=y，说明已经找到了 LCA，LCA 就等于 y。

用二进制拆分思想，把 x，y 同时向上调整，并保持深度一致且二者不相会。具体来说，就是依次尝试把 x，y 同时向上走 k=2^logn,...,2^1,2^0步，在每次尝试中，若 F[x,k] ≠ F[y,k]（即仍未相会），则令 x = F[x,k]，y = F[y,k]。

此时 x，y 必定只差一步就相会了，它们的父节点 F[x,0] 就是 LCA。
```

```c++
#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
  
const int maxn=101000;
int n;
int m;
int s;
int tot;
int head[maxn];
int lg[maxn];
int depth[maxn];
int fa[maxn][32];
  
struct edge{
    int to;
    int from;
    int nxt;
}e[2*maxn];
  
void add(int x,int y){
    tot++;
    e[tot].to=y;
    e[tot].from=x;
    e[tot].nxt=head[x];
    head[x]=tot;
}
  
void dfs(int now,int fath){
    fa[now][0]=fath;
    depth[now]=depth[fath]+1;
    for(int i=1;i<=lg[depth[now]];i++) fa[now][i]=fa[fa[now][i-1]][i-1];
    for(int i=head[now];i;i=e[i].nxt){
        int y=e[i].to;
        if(y==fath) continue;
        dfs(y,now);
    }
}
  
int lca(int x,int y){
    if(depth[x]<depth[y]) swap(x,y);
    while(depth[x]>depth[y]) x=fa[x][lg[depth[x]-depth[y]]-1];
    if(x==y) return x;
    for(int k=lg[depth[x]]-1;k>=0;k--){
        if(fa[x][k]!=fa[y][k]){
            x=fa[x][k];
            y=fa[y][k];
        }
    }
    return fa[x][0];
}
  
int x,y;
  
int main(){
    cin>>n>>m>>s;
    for(int i=1;i<n;i++){
        cin>>x>>y;
        add(x,y);
        add(y,x);
    }
    for(int i=1;i<=n;i++) lg[i]=lg[i-1]+(1<<lg[i-1]==i);
    dfs(s,0);
    for(int i=1;i<=m;i++){
        cin>>x>>y;
        cout<<lca(x,y)<<endl;
    }
}
```

> https://www.dotcpp.com/course/947
> https://www.luogu.com.cn/problem/P3379

#### 4、数值处理算法

#### 5、排序算法

##### 计数排序

###### 概念

计数排序（Counting sort），又叫非比较排序。顾名思义，该算法不是通过比较数据的大小来进行排序的，而是通过统计数组中相同元素出现的次数，然后通过统计的结果将序列回收到原来的序列中。  

<img src="https://img-blog.csdnimg.cn/eec6262538844b1ab7dafb56aa669b16.png?x-oss-process=image/watermark,type_ZHJvaWRzYW5zZmFsbGJhY2s,shadow_50,text_Q1NETiBA5qOu5piO5biu5aSn5LqO6buR6JmO5biu,size_15,color_FFFFFF,t_70,g_se,x_16" alt="在这里插入图片描述" style="zoom:50%;" />

上列中的映射方法称为绝对映射，即arr数组中的元素是几就在count数组中下标为几的位置++，但这样会造成空间浪费。例如，我们要将数组：102,101,108，进行排序，难道我们要开辟109个整型空间吗？

若是使用计数排序，我们应该使用相对映射，简单来说，数组中的最小值就相对于count数组中的0下标，数组中的最大值就相对于count数组中的最后一个下标。这样，对于数组：102,101,108，我们就只需要开辟用于储存4个整型的空间大小了，此时count数组中下标为i的位置记录的实际上是101+i这个数出现的次数。

![在这里插入图片描述](讲义.assets/watermark,type_ZHJvaWRzYW5zZmFsbGJhY2s,shadow_50,text_Q1NETiBA5qOu5piO5biu5aSn5LqO6buR6JmO5biu,size_8,color_FFFFFF,t_70,g_se,x_16.png)

###### 总结

 绝对映射：count数组中下标为i的位置记录的是arr数组中数字i出现的次数。 

 相对映射：count数组中下标为i的位置记录的是arr数组中数字min+i出现的次数。

计数排序是一种非基于比较的**非稳定线性排序算法。**

基本思想是：用空间换时间，本质上是建立了基于元素的Hash表。

###### 代码

```c++
const int N = 100010;
const int W = 100010;

int n, w, a[N], cnt[W], b[N];

void counting_sort() {
  memset(cnt, 0, sizeof(cnt));
  for (int i = 1; i <= n; ++i) ++cnt[a[i]];
  for (int i = 1; i <= w; ++i) cnt[i] += cnt[i - 1];
  for (int i = n; i >= 1; --i) b[cnt[a[i]]--] = a[i];
}
```

时间复杂度：O ( N + range ) 空间复杂度：O ( range ) 。

###### 应用场景

计数排序只适用于数据范围较集中的序列的排序，若待排序列的数据较分散，则会造成空间浪费，并且计数排序只适用于整型排序，不适用与浮点型排序。

#### 6、搜索算法

#### 7、图论算法

##### 泛洪算法（flood fill）

###### 作用

用于确定连接到[多维数组](https://so.csdn.net/so/search?q=多维数组&spm=1001.2101.3001.7020)中给定节点的区域，可以用来标记或者分离图像的一部分，实现如Ps中自动选区功能。

###### 基本思想

顾名思义就像洪水漫过一样，把一块连通的区域填满。当然水要能漫过需要满足一定的条件，可以理解为满足条件的地方就是低洼的地方，水才能流过去。在图像处理中就是给定一个种子点作为起始点，向附近相邻的像素点扩散，把颜色相同或者相近的所有点都找出来，并填充上新的颜色，这些点形成一个连通的区域。

###### 算法参数

1. 起始节点（start node）
2. 目标颜色（target color）
3. 替换颜色（replacement color）

###### 算法实现

漫水填充算法实现最常见有**四邻域**像素填充法，**八邻域**像素填充法，基于**扫描线**的填充方法。根据代码实现方式又可以分为递归与非递归。

**四邻域递归实现**

![img](讲义.assets/03825a327c09c4c3b3bd60c1c01a1183.png)

将像素点(x,y)周围的上下左右四个点分别进行着色。

```c++
void floodFill4(int x, int y, int newColor, int oldColor)  
{  
    if(x >= 0 && x < width && y >= 0 && y < height   
         && getPixel(x, y) == oldColor && getPixel(x, y) != newColor)   
    {   
        setPixel(x, y, newColor); //set color before starting recursion  
        floodFill4(x + 1, y, newColor, oldColor);  
        floodFill4(x - 1, y, newColor, oldColor);  
        floodFill4(x, y + 1, newColor, oldColor);  
        floodFill4(x, y - 1, newColor, oldColor);  
    }
}
```

**八邻域递归实现**

![img](https://img-blog.csdnimg.cn/img_convert/e1f26e416a6e96f44b067a615560b469.png)

将一个像素点的上下左右，左上，左下，右上，右下都进行着色。

```c++
public void floodFill8(int x, int y, int newColor, int oldColor)  
{  
    if(x >= 0 && x < width && y >= 0 && y < height &&   
            getPixel(x, y) == oldColor && getPixel(x, y) != newColor)   
    {   
        setPixel(x, y, newColor); //set color before starting recursion  
        floodFill8(x + 1, y, newColor, oldColor);  
        floodFill8(x - 1, y, newColor, oldColor);  
        floodFill8(x, y + 1, newColor, oldColor);  
        floodFill8(x, y - 1, newColor, oldColor);  
        floodFill8(x + 1, y + 1, newColor, oldColor);  
        floodFill8(x - 1, y - 1, newColor, oldColor);  
        floodFill8(x - 1, y + 1, newColor, oldColor);  
        floodFill8(x + 1, y - 1, newColor, oldColor);  
    }     
} 
```

**扫描线递归实现**

![img](讲义.assets/2e9add9c26b4730d9528e3cbe0f63879.gif)

先扫描一行或者一列内的连通像素，然后再上下行或者左右列扫描，可以减少递归栈的深度。

```c++
void floodFillScanline(int x, int y, int newColor, int oldColor){
	if(newColor==oldColor) return;
	if(screen[x][y]!=oldColor) return;
	int x1=x;
	while(x1<w&&screen[x1][y]==oldColor){
	    screen[x1][y]=newColor;
	    x1++;
	}
	x1=x-1;
	while(x1>=0&&screen[x1][y]==oldColor){
	    screen[x1][y]=newColor;
	    x1--;
	}
	x1=x;
	while(x1<w&&screen[x1][y]==newColor){
	    if(y<h-1&&screen[x1][y+1]==oldColor) floodFillScanline(x1,y+1,newColor,oldColor);
	    x1++;
	}
	x1=x-1;
	while(x1>0&&screen[x1][y]==newColor){
	    if(y>0&&screen[x1][y+1]==oldColor) floodFillScanline(x1,y+1,newColor,oldColor);
	    x1--;
	}
	x1=x;
	while(x1<w&&screen[x1][y]==newColor){
	    if(y<h-1&&screen[x1][y-1]==oldColor) floodFillScanline(x1,y+1,newColor,oldColor);
	    x1++;
	}
	x1=x-1;
	while(x1>0&&screen[x1][y]==newColor){
	    if(y>0&&screen[x1][y-1]==oldColor) floodFillScanline(x1,y+1,newColor,oldColor);
	    x1--;
	}
}
```

#### 8、动态规划

##### 简单区间类型动态规划

简单区间类型动态规划是指，**给定一个长度为 n 的数组，求其某个连续子数组的最大/最小值等类型的问题。**该问题可以使用动态规划来求解。

###### 例子

假设有一个数组 arr = {5, -6, 8, -7, 10, 2}，要求求出其所有子数组中的最大值。

动态规划的思路是，先定义一个 dp 数组，其中 dp[i] 表示以 arr[i] 结尾的子数组的最大值。那么对于 dp[i]，它可以由 dp[i-1] 和 arr[i] 计算得到。

具体地，考虑以 arr[i] 结尾的子数组的最大值，可能有两种情况：

1. 以 arr[i-1] 结尾的最大子数组加上 arr[i] 仍然比 arr[i] 小，则以 arr[i] 结尾的最大子数组就是 arr[i] 本身；
2. 以 arr[i-1] 结尾的最大子数组加上 arr[i] 比 arr[i] 大，则以 arr[i] 结尾的最大子数组就是以 arr[i-1] 结尾的最大子数组加上 arr[i]。

因此，可以得到状态转移方程为：

dp[i] = max(dp[i-1] + arr[i], arr[i]);

最终的最大子数组和就是 dp 数组中的最大值。

###### 代码

```c++
#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
    vector<int> arr = {5, -6, 8, -7, 10, 2};
    int n = arr.size();
 
    vector<int> dp(n, 0);
    dp[0] = arr[0];
    int res = dp[0];
 
    for (int i = 1; i < n; i++) {
        dp[i] = max(dp[i-1] + arr[i], arr[i]);
        res = max(res, dp[i]);
    }
 
    cout << "The maximum sum of subarray is: " << res << endl;
 
    return 0;
}
```

输出结果为：

```
The maximum sum of subarray is: 15
```

这说明，原数组 arr 的最大子数组和为 15，即 {8, -7, 10, 2}。

###### 代码演示过程

```c++
#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    // 输入数据
    int n;
    cin >> n;
    vector<int> a(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
 
    // 初始化 dp 数组
    vector<vector<int>> dp(n+1, vector<int>(n+1));
    for (int i = 1; i <= n; i++) {
        dp[i][i] = a[i];
    }
 
    // 状态转移
    for (int len = 2; len <= n; len++) {
        for (int i = 1; i <= n - len + 1; i++) {
            int j = i + len - 1;
            dp[i][j] = max(a[i] - dp[i+1][j], a[j] - dp[i][j-1]);
        }
    }
 
    // 输出结果
    cout << dp[1][n] << endl;
 
    return 0;
}
```

接下来用数据模拟展示：

假设输入数据为 5 2 7 8 1 2，那么初始化的 dp 数组为：

```
dp[1][1] = 2
dp[2][2] = 7
dp[3][3] = 8
dp[4][4] = 1
dp[5][5] = 2
```

接着，根据状态转移方程，依次计算 dp 数组的值：

```
dp[1][2] = max(2 - dp[2][2], 7 - dp[1][1]) = max(2 - 7, 7 - 2) = 5
dp[2][3] = max(7 - dp[3][3], 8 - dp[2][2]) = max(7 - 8, 8 - 7) = 1
dp[3][4] = max(8 - dp[4][4], 1 - dp[3][3]) = max(8 - 1, 1 - 8) = 7
dp[4][5] = max(1 - dp[5][5], 2 - dp[4][4]) = max(1 - 2, 2 - 1) = 1
dp[1][3] = max(2 - dp[2][3], 7 - dp[1][2]) = max(2 - 1, 7 - 5) = 2
dp[2][4] = max(7 - dp[3][4], 8 - dp[2][3]) = max(7 - 7, 8 - 1) = 7
dp[3][5] = max(8 - dp[4][5], 1 - dp[3][4]) = max(8 - 1, 1 - 7) = 7
dp[1][4] = max(2 - dp[2][4], 7 - dp[1][3]) = max(2 - 7, 7 - 2) = 5
dp[2][5]
```

### 2.1.5 数学与其他

#### 1、数及其运算

#### 2、初等数学

#### 3、初等数论

##### 素数筛法：埃氏筛法与线性筛法

学习埃氏筛之前，我们先看一下暴力筛法，即对每个数都用试除法判断其是不是质数：

###### 暴力筛法

```c++
static final int N = 1e7 + 5;
int st[N]; // 初始化为0， 0表示质数，1表示合数

for(int i = 2; i <= n; i++){
	for(int j = 2; j <= i / j; j++){//试除法
		if(i % j == 0){
			st[i] = 1; // 合数，标记为1 
		}
	}
}
```

###### 埃式筛

埃氏筛（埃拉托斯特尼筛法）。

思路：**一个质数的倍数一定是合数**，所以，假设P是质数，我们可以筛掉区间 [1,1e7\]中所有P的倍数。  

先看个例子，对于数列1~11：  

<img src="讲义.assets/20200305002131154.png" alt="在这里插入图片描述" style="zoom:50%;" />

 先筛去2的倍数：

<img src="讲义.assets/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L0dEX09ORQ==,size_16,color_FFFFFF,t_70.png" alt="在这里插入图片描述" style="zoom:50%;" />

  然后筛去3的倍数：

<img src="讲义.assets/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L0dEX09ORQ==,size_16,color_FFFFFF,t_70-17196522467733.png" alt="在这里插入图片描述" style="zoom:50%;" />

 然后筛去5的倍数：

<img src="讲义.assets/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L0dEX09ORQ==,size_16,color_FFFFFF,t_70.png" alt="在这里插入图片描述" style="zoom:50%;" />

至此，1~11内的所有合数都被筛完了， 2 3 5 7 11是数列中的质数。 为什么这样能筛去所有的合数呢，因为一个合数一定能被分解为几个质数的幂的乘积，并且这个数的**质因子一定是小于它本身的**，所以当我们从**小到大将每个质数的倍数都筛去的话**，当**遍历到一个合数时，它一定已经被它的质因子给筛去了**。

代码：

```C++
typedef long long LL;
const int N = 100000010;
int vis[N];//真为合数
int prim[N]; //记录质数
int cnt;//质数个数

void Eratosthenes(int n){//埃氏筛法
    for(LL i=2; i<=n; ++i){
        if( ! vis[i]){
            prim[++cnt] = i;
            for(LL j=i*i; j<=n; j+=i)
                vis[j] = 1;
		}
	}	
}
//时间复杂度为：O(nloglog_2n)
```

模拟：

<img src="讲义.assets/image-20240629174124594.png" alt="image-20240629174124594" style="zoom:50%;" />

###### 欧拉筛

欧拉筛法(线性筛法)

思路：

从小到大**枚举每个数**

1、如果当前数没划掉，必定是质数，记录该质数

2.枚举已记录的质数（如果合数已越界则中断)

​	(1)合数未越界，则划掉合数

​	(2)条件i%p==0，保证合数只被最小质因子划掉

​		若i是质数,则最多枚举到自身中断
​		若i是合数,则最多枚举到自身的最小质数中断

代码：

```c++
const int N = 100000010;
int vis[N]; //划掉合数
int prim[N];//记录质数
int cnt; //质数个数

void get_prim(int n){//线性筛法
    for( int i=2; i<=n; i++){
        if(!vis[i]) prim[++cnt] = i;
        for(int j=1; 1ll*i*prim[j]<=n; j++){
            vis[i*prim[j]] = 1;
            if(i%prim[j] == 0) break ;
        }
    }
}
//时间复杂度O(n)
```

模拟：

<img src="讲义.assets/image-20240629173612291-17196537821535.png" alt="image-20240629173612291" style="zoom:50%;" />

> [素数筛法详解：埃氏筛和欧拉筛-CSDN博客](https://blog.csdn.net/GD_ONE/article/details/104660294)
>
> [G08 筛质数 埃氏筛法 线性筛法_哔哩哔哩_bilibili](https://www.bilibili.com/video/BV1kG411u7Ze/?uid=4256316B4734313175375A65&vd_source=05a2c8b8cfbcf0257f6fca0ea767d5c5)

#### 4、离散与组合数学

#### 5、其他

##### 格雷码

在一组数的编码中，若任意两个相邻的代码只有一位二进制数不同，则称这种编码为格雷码（Gray Code），另外由于最大数与最小数之间也仅一位数不同，即“首尾相连”，因此又称循环码或反射码。

<img src="讲义.assets/image-20240629191344012.png" alt="image-20240629191344012" style="zoom:50%;" />

###### 认识格雷码

下为3位元的Gray Code：Gray Code是一个数列集合，每个数使用二进位来表示，假设使用n位元来表示每个数好了，任两个数之间只有一个位元值不同

> 000 001 011 010 110 111 101 100

###### 位元

位元就是数列的基础数是由几个二进位数来表示，就是几个位元。

上面的例子里面：000 是3个二进制数，那么就是3个位元，那么2^3 = 8,总共8个位值

0000 0001 0011 0010 0110 0111 0101 0100 1100 1101 1111 1110 1010 1011 1001 1000

上面，0000 等是4个 二进制数，那么就是4个位元，那么4^3 = 16,总共16个位值

###### 码值

001 就是一个码值

###### 格雷码的生成

第1步，改变最右边的位元值；

第2步，改变右起第一个为1的位元的左边位元；

重复第一步->第二步，直到所有的格雷码产生完毕。

###### 二进制转格雷码

方法1：

二进制码转换成二进制格雷码，其法则是保留二进制码的最高位作为格雷码的最高位，而次高位格雷码为二进制码的高位与次高位相异或，而格雷码其余各位与次高位的求法相类似。

<img src="讲义.assets/20160616125334530.png" alt="转换示意图" style="zoom:50%;" />

方法2：

二进制最高位前补0，计算间隙左右两位异或值。（与方法1类似）

> http://t.csdnimg.cn/StSB9
>
> http://t.csdnimg.cn/foHES
>
> http://t.csdnimg.cn/h8KwE

## 2.2 提高级

### 2.2.1 基础知识与编程环境

### 2.2.2 C++ 程序设计

#### 1、类（class）

##### 类的概念及简单应用

###### 类的概念

（官方）类是 C++ 的核心特性，在C++中，除了已有的数据类型（整型，字符型）外，还可以自定义数据类型，这种类型通常被称为用户定义的类型。类用于指定对象的形式，它包含了数据表示法（数据类）和用于处理数据（操作类）的方法。类中的数据和方法称为类的成员。函数在一个类中被称为类的成员。

（白话）在C++中, 用 "**类**" 来描述 "**对象**", 所谓的"对象"是指现实世界中的一切事物。那么类就可以看做是对相似事物的抽象, 找到这些不同事物间的共同点, 如自行车和摩托车, 首先他们都属于"对象", 并且具有一定得相同点, 和一些不同点, 相同点如他们都有质量、都有两个轮子, 都是属于交通工具等。"都有质量"、"两个轮子"属于这个对象的属性, 而"都能够当做交通工具"属于该对象具有的行为, 也称方法。

###### 简单应用

```c++
#include <iostream>
using namespace std;
class Box
{
   public:
      double length;// 长度
      double breadth;// 宽度
      double height;// 高度
      void display(){//打印对象的长宽高
          cout<<length<<endl<<breadth<<endl<<height<<endl;
          cout<<endl;
      }
      Box(double l,double b,double h){//普通含参构造函数
        length =l;
        breadth=b;
        height=h;
      }
      Box(Box &x){//自定义拷贝构造函数 复制一个现有的对象的数据
          length=x.length;
          breadth=x.breadth;
          height=x.height;      
      }
};
int main( )
{
   Box Box1(1,2,3);//声明 Box1，类型为 Box  使用普通构造函数初始化
   Box Box2(Box1);//声明 Box2，类型为 Box  使用拷贝构造函数初始化 复制Box1的数据内容
   Box1.display();//输出Box1内容
   Box2.display();//输出Box2内容
   return 0;
}
```

##### 成员函数和运算符重载

详细打开[c++核心编程.pdf](./c++核心编程.pdf)

> http://t.csdnimg.cn/Vg2Pz
>
> http://t.csdnimg.cn/nslzd

#### 2、STL 模板

##### 容器（container）和迭代器（iterator）

##### 对（pair）、元组（tuple）

##### 集合（ set） 、多重集合（ multiset）

##### 双端队列（ deque）、优先队列（ priority_queue）

##### 映射（ map） 、多重映射（ multimap）

##### 算法模板库中的常用函数

详细打开[C++提高编程.pdf](./C++提高编程.pdf)

### 2.2.3 数据结构

#### 1、线性结构

#### 2、集合与森林

##### 树的孩子兄弟表示法

也叫树的二叉树表示法。树的左指针指向自己的第一个孩子，右指针指向与自己相邻的兄弟。

优点：它和二叉树的二叉链表表示完全一样。可利用二叉树的算法来实现对树的操作 。

<img src="讲义.assets/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L2NqdzgzODk4MjgwOQ==,size_16,color_FFFFFF,t_70.png" style="zoom:50%;" />

###### 左孩子右兄弟表示的树的高度

因为二叉树表示法的根节点没有右孩子，所以树高就是左子树树高 + 1。

然后我们看下根节点第一个孩子的高度，由于第一个孩子的右子树和第一个孩子的高度是相同的，所以比较左子树 + 1的高度来和右子树来比较，如果 左子树 + 1 > 右子树，高度取左子树 + 1，否则取右子树。

```c++
//左孩子右兄弟表示的树的高度 
int Height(Tree& t){
	if(t == NULL) return 0;
	return Height(t->left) + 1 > Height(t->right) ? Height(t->left) + 1 : Height(t->right);
}
```

###### 左孩子右兄弟表示的树的叶子结点数

与求二叉树叶子结点的算法相似，仅需要把判断条件修改。

```c++
//左孩子右兄弟表示的树的叶子结点数 
int Count(Tree& t){
	if(t == NULL) return 0;
	if(t->left == NULL) return 1;
	return Count(t->left) + Count(t->right); 
}
```

###### 树的总结点数

与求二叉树叶子结点的算法完全相同。

```c++
//总的结点数 
int CountSum(Tree& t){
	if(t == NULL) return 0;
	return CountSum(t->left) + CountSum(t->right) + 1;
}
```

###### 树的先根遍历 

树的先根遍历，孩子是根，兄弟不是，多么精辟的话。先一边输出一边递归找孩子，等递归返回时再输出兄弟。

树的先根遍历的结果和二叉树的前序遍历的结果完全相同。

```c++
//树的先根遍历 
void preOrder(Tree& t){
	if(t == NULL) return;
	cout<<t->val<<" ";
	TreeNode* p = t->left;
	while(p != NULL){
		preOrder(p); //递归找“根” 
		p = p->right;
	}	
} 
```

###### 树的后根遍历

在递归的边界处输出，先一直往下找“根”，找到最后走到孩子到了边界了，打印孩子之后再开始挖我的兄弟。

树的后根遍历的结果和二叉树的中序遍历的结果完全相同。

```c++
//树的后根遍历
void PostOrder(Tree& t){
	if(t == NULL) return;
	TreeNode* p = t->left;
	while(p != NULL){
		PostOrder(p); //递归找“根”
		p = p->right;
	}
	cout<<t->val<<" ";
} 
```

###### 左孩子右兄弟表示的树的层次遍历

每找到一个孩子时，迭代的把它的兄弟全部找出来，对每个结点都这样处理。

最后的结果按行来打印。

```c++
//左孩子右兄弟表示的树的层次遍历 
void levelOrder(Tree& t){
	if(t == NULL) return;
	queue<TreeNode*> q;
	TreeNode* p;
	q.push(t);
	while(!q.empty()){
		int width = q.size();
		for(int i = 0;i < width;i ++){
			p = q.front();
			q.pop();
			cout<<p->val<<" ";
			p = p->left;
			while(p != NULL){
				q.push(p);
				p = p->right;
			}
		}
		cout<<endl;
	}
}
```

###### 左孩子右兄弟表示的树的宽度

与二叉树非递归找宽度的原理完全相同，既然可以按层打印，就可以比较记录最大的宽度。

```c++
//左孩子右兄弟表示的树的宽度 
int Width(Tree& t){
	if(t == NULL) return 0;
	queue<TreeNode*> q;
	TreeNode* p;
	int max = 0;
	q.push(t);
	while(!q.empty()){
		int width = q.size();
		for(int i = 0;i < width;i ++){
			p = q.front();
			q.pop();
			p = p->left;
			while(p != NULL){
				q.push(p);
				p = p->right;
			}
		}
		max = max < width ? width : max; 
	}
	return max;
}
```

###### 在以t为根的树中找结点p的双亲

循长子的兄弟链，递归在子树中搜索。

```c++
//在以t为根的树中找结点p的双亲
TreeNode* findParent(Tree& t,TreeNode* p){
	if(t == NULL || p ==NULL) return NULL;
	TreeNode* q = t->left;
	TreeNode* s;
	//循长子的兄弟链，递归在子树中搜索 
	while(q != NULL && q != p){
		if(s = findParent(p,q) != NULL) return s; //找到双亲，返回 
		q = q->right;
	}
	if(q != NULL && q == p) return t; //找到双亲 
	else return NULL; //未找到 
} 
```

树采用先序构造，大家可以自己画一下。

> [完整代码](./代码/02/树的孩子兄弟表示法.cpp)
>
> http://t.csdnimg.cn/Ea86n

#### 3、特殊树

##### 树状数组

这是二叉树的结构  

<img src="讲义.assets/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L1RoZVdheUZvckRyZWFt,size_16,color_FFFFFF,t_70.png" alt="在这里插入图片描述" style="zoom:50%;" />

这是树状数组的结构 

<img src="讲义.assets/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L1RoZVdheUZvckRyZWFt,size_16,color_FFFFFF,t_70-171972003434518.png" alt="在这里插入图片描述" style="zoom:50%;" />

###### 概念

树状数组是一种支持 **单点修改** 和 **区间查询** 的，代码量小的数据结构。

###### 前置知识

$lowbit(x)$运算
如何计算一个非负整数n在二进制下的最低为1及其后面的0构成的数？
例如：$44=(101100)_2$,最低为1和后面的0构成的数是$(100)_2=4$所以$lowbit(44)=lowbit((101100)_2)=(100)_2=4$,那么$lowbit$运算时怎么实现的呢？

44的二进制=(101100)，我们对44的二进制数取反+1，也即~44+1,得到-44

-44的二进制=(010100)，然后我们把44和-44的二进制进行按位与$(\&)$运算，得到$(000100)_2=(4)_{10}$

所以$lowbit(x) = x\&(-x)$

###### 问题引入

<img src="讲义.assets/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L1RoZVdheUZvckRyZWFt,size_16,color_FFFFFF,t_70-17197190171564.png" alt="在这里插入图片描述" style="zoom:33%;" />


显然，我们一开始会想到暴力的朴素做法，单点修改操作时间复杂度$O(1)$，区间求和，暴力遍历区间每一个数再相加时间复杂度$O(n)$，如果区间求和查询的次数为$n$次，那么中的时间复杂度为$O(n^2)$,对于大数据的题来说肯定会T，此时如果用树状数组的话复杂度可以讲到$O(nlogn)$.

###### 树状数组结构分析

接下来分析树状数组的原理  

<img src="讲义.assets/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L1RoZVdheUZvckRyZWFt,size_16,color_FFFFFF,t_70-171971974013912.png" alt="在这里插入图片描述" style="zoom:33%;" />

上面时树状数组的结构图，$t[x]$保存以$x$为根的子数中叶子节点值的和，原数组为$a[]$。那么原数组前4项的和$t[4]=t[2]+t[3]+a[4]=t[1]+a[2]+t[3]+a[4]=a[1]+a[2]+a[3]+a[4]$,看似没有什么特点，别着急往下看

<img src="讲义.assets/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L1RoZVdheUZvckRyZWFt,size_16,color_FFFFFF,t_70-171971975024414.png" alt="在这里插入图片描述" style="zoom:33%;" />

我们通过观察节点的二进制数，进一步发现，树状数组中节点$x$的父节点为$x+lowbit(x)$,例如$t[2]$的父节点为$t[4]=t[2+lowbit(2)]$

###### 单点修改，区间查询

所以我们在**单点修改**的同时，更新父节点就变得尤为简单，例如我们对$a[1]+k$，那么祖先节点$t[1],t[2],t[4],t[8]$都需要$+k$更新(因为$t[]$表示前缀和)，此时我们就可以用$+lowbit$操作实现。

**代码**

```c++
int add_dandian(int x,int k)
{
	for(int i=x;i<=n;i+=lowbit(i))
	t[i]+=k;
}
```

那么单点修改实现了，如何实现区间查询呢？ 
例如：我们需要查询前7项的区间和sum\[7\] 

<img src="讲义.assets/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L1RoZVdheUZvckRyZWFt,size_16,color_FFFFFF,t_70-171971975705516.png" alt="在这里插入图片描述" style="zoom: 33%;" />

通过图中不难看出，$sum[7]=t[7]+t[6]+t[4]$ ,我们进一步发现,$6=7-lowbit(7),4=6-lowbit(6)$，所以我们可以通过不断的$-lowbit$操作来实现求和  **代码**

```c++
int ask(x){
	int sum = 0;
	for(int i=x;i;i-=lowbit(i)){
		sum+=t[i];
	}
	return sum;
}
```

这只能求区间$[1,x]$的区间和，那么如何求$[L,R]$的区间和呢？这时候利用前缀和相减的性质就可以了，$ [L,R]=[1,R]-[1,L-1] $
**代码**

```c++
int search(int L,int R)
{
	int ans = 0;
	for(int i=L-1;i;i-=lowbit(i))
	ans-=c[i];
	for(int i=R;i;i-=lowbit(i))
	ans+=c[i];
	return 0;
}
```

###### 区间修改，单点查询

对于这一类操作，我们需要构造出原数组的差分数组b，然后用树状数组维护b数组即可。对于区间修改的话，我们只需要对差分数组进行操作即可，例如对区间$[L,R]+k$,那么我们只需要更新差分数组$add(L,k)$,$add(R+1,-k)$，这是差分数组的性质。

**代码**

```c++
int update(int pos,int k)//pos表示修改点的位置,K表示修改的值也即+K操作
{
	for(int i=pos;i<=n;i+=lowbit(i))
	c[i]+=k;
	return 0;
}
update(L,k);
update(R+1,-k);
```

对于单点查询操作，求出$b$数组的前缀和即可，因为$a[x]=差分数组b[1]+b[2]+…+b[x]$的前缀和，这是差分数组的性质之一。
**代码**

```c++
ll ask(int pos)//返回区间pos到1的总和
{
	ll ans=0;
	for(int i=pos;i;i-=lowbit(i)) ans+=c[i];
	return ans;
} 
```

> http://t.csdnimg.cn/zTpCy
>
> [树状数组 - OI Wiki (oi-wiki.org)](https://oi-wiki.org/ds/fenwick/)
>
> [差分数组详解](https://www.bilibili.com/read/cv24236693/)
>
> [P3374 【模板】树状数组 1 - 洛谷 | 计算机科学教育新生态 (luogu.com.cn)](https://www.luogu.com.cn/problem/P3374)
>
> [P3368 【模板】树状数组 2 - 洛谷 | 计算机科学教育新生态 (luogu.com.cn)](https://www.luogu.com.cn/problem/P3368)

##### 笛卡尔树

###### 定义

笛卡尔树是一种特定的**二叉树**数据结构，可由数列构造，在范围最值查询、范围top k查询(range ,top k queries)等问题上有广泛应用。它具有堆的有序性,·中序遍历可以输出原数列.

###### 性质

无相同元素的数列构造出的笛卡尔树具有下列性质:

- 1.结点一一对应于数列元素。即数列中的每个元素都对应于树中某个唯一结点，树结点也对应于数列中的某个唯一元素
- 2.中序遍历(in-order traverse)笛卡尔树即可得到原数列。（即任意树结点的左子树结点所对应的数列元素下标比该结点所对应元素的下标小，右子树结点所对应数列元素下标比该结点所对应元素下标大。）
- 3.树结构存在堆序性质，即任意树结点所对应数值大/小于其左、右子树内任意结点对应数值

根据堆序性质，笛卡尔树根结点为数列中的最大/小值，树本身也可以通过这一性质递归地定义:根结点为序列的最大/小值，左、右子树则对应于左右两个子序列，其结点同样为两个子序列的最大/小值。因此，上述三条性质唯一地定义了笛卡尔树。

###### 例子

构造具有大根堆性质的笛卡尔树：

<img src="讲义.assets/image-20240630110327536.png" alt="image-20240630110327536" style="zoom:50%;" />

构造具有小根堆性质的笛卡尔树：

![image-20240630111438835](讲义.assets/image-20240630111438835.png)

###### 代码

```c++
int st[N], ls[N], rs[N], n, A[N];// ls代表笛卡尔树每个节点的左孩子，rs代表笛卡尔树每个节点的右孩子
int top = 0;
//构造小根堆性质的笛卡尔树
for (int i = 1; i <= n; ++i) 
{
    while (top && A[st[top]] > A[i]) ls[i] = st[top--]; //栈顶元素为当前元素的左孩子
    if (top) rs[st[top]] = i; //当前元素为栈顶元素的右孩子
    st[++top] = i;
}
```

> [数据结构——二叉搜索树详解-CSDN博客](https://blog.csdn.net/L_T_W_Y/article/details/108407686)
>
> [P5854 【模板】笛卡尔树 - 洛谷 | 计算机科学教育新生态 (luogu.com.cn)](https://www.luogu.com.cn/problem/P5854)
>
> [神秘数据结构：笛卡尔树 - Flandre-Zhu - 博客园 (cnblogs.com)](https://www.cnblogs.com/LightningUZ/p/15073147.html)
>
> https://oi-wiki.org/ds/cartesian-tree/
>
> https://www.bilibili.com/video/BV1mE421G7jk/?share_source=copy_web&vd_source=97161cd20dc703f41cf60bcb19a74f71

##### 平衡树：AVL、treap、splay 等

###### 平衡二叉树（AVL）

**概念**

平衡二叉树全称叫做`平衡二叉搜索（排序）树`，简称 AVL（是大学教授 G.M. Adelson-Velsky 和 E.M. Landis 名称的缩写）树。

**性质**

- 是一颗二叉搜索树（Binary Serach Tree, BST）
- 它是一棵空树或它的左右两个子树的高度差的绝对值不超过1，
- 左右两个子树也都是一棵平衡二叉树。

**平衡因子（Balance Factor, bf）**

bf =左子树的深度 - 右子树的深度。（在 AVL树中，必须满足： -1<=bf<=1）

**区分**

<img src="讲义.assets/image-20240705215719509.png" alt="image-20240705215719509" style="zoom:50%;" />

在插入的过程中，会出现一下四种情况破坏AVL树的特性，我们可以采取如下相应的旋转。

| 插入位置                                              | 状态   | 操作   |
| ----------------------------------------------------- | ------ | ------ |
| 在结点T的左结点（L）的 **左子树（L）** 上做了插入元素 | 左左型 | 右旋   |
| 在结点T的左结点（L）的 **右子树（R）** 上做了插入元素 | 左右型 | 左右旋 |
| 在结点T的右结点（R）的 **右子树（R）** 上做了插入元素 | 右右型 | 左旋   |
| 在结点T的右结点（R）的 **左子树（L）** 上做了插入元素 | 右左型 | 右左旋 |

*注意：T 表示失衡节点。*

<img src="讲义.assets/20190823133444314-172023090638139.png" alt="在这里插入图片描述" style="zoom:50%;" />

**构建AVL树**

每次插入需要检查各祖先平衡因子，找到**最近**失衡并调整。

例如：14 9 5 17 11 12 7 19 16 27

<img src="讲义.assets/image-20240705223908948.png" alt="image-20240705223908948" style="zoom:50%;" />

**删除AVL树**

删除结点后需要依次对每个祖先检查并调整。

例如：删除5

<img src="讲义.assets/image-20240705224011237.png" alt="image-20240705224011237" style="zoom:50%;" />

> https://www.bilibili.com/video/BV1tZ421q72h
>
> https://blog.csdn.net/xiaojin21cen/article/details/97602146
>
> https://www.cnblogs.com/idreamo/p/8308336.html
>
> https://segmentfault.com/a/1190000006123188
>
> https://blog.csdn.net/sjg_sjk/article/details/80332151
>
> https://blog.csdn.net/FreeeLinux/article/details/52204851

###### Treap树（树堆)

Treap =Tree + Heap，树和堆的结合

- 每个结点有2个值：键值、优先级。
- 对于键值来说，这棵树是**BST**；对于优先级来说，这棵树是一个**堆**。
- Treap树有唯一的形态。解释：令每个结点的优先级互不相等，那么整棵树的形态是唯一的,和元素的插入顺序没有关系。

<img src="讲义.assets/image-20240705225714944.png" alt="image-20240705225714944" style="zoom:50%;" />

**Treap树如何解决平衡问题?**

- 合理分配结点的优先级，可以得到一个比较平衡的BST。
- —个简单的分配方法：随机。对每个结点的优先级进行随机赋值，生成的Treap树的形态也是随机的。
- 虽然不能保证每次生成的Treap树是平衡的，但是**期望**的插入、删除、查找的时间复杂度都是$O(logn)$的。

**插入**

把新结点x插入到Treap树，分两步:

- 先把x按键值大小插入到合适的子树上。
- 给x随机分配一个优先级，如果x的优先级违反了堆的性质，即它的优先级比父结点高，那么进行调整，让x往上走，替代父结点，最后得到一个新的Treap树。

*例：新结点的插入和调整*

1. 图（2）插入d点，按朴素的插入方法插入到底部；
2. 图（3）d的优先级比父结点c高，左旋，上升;
3. 图（4）d的优先级比新的父结点b高，继续左旋上升;
4. 图（5）再次左旋上升，完成了新的Treap树。

<img src="讲义.assets/image-20240705230450303.png" alt="image-20240705230450303" style="zoom:50%;" />

**删除**

- 待删除的结点x是叶子结点：直接删除。
- 待删除的结点x有子结点：找到优先级最大的子结点，把x向相反的方向旋转，也就是把x向树的下层调整，直到x被旋转到叶子结点，然后直接删除。

**分裂与合并**

- 把一棵树分裂成两棵树，或者把两棵树合并成一棵。Treap树做这样的操作，**比较繁琐**。
- 一般用`Splay树`做分裂与合并。

> https://www.bilibili.com/video/BV1hh4y1W7Zd
>
> https://oi-wiki.org/ds/treap/
>
> https://blog.csdn.net/yandaoqiusheng/article/details/85037548

###### 伸展树（Splay）

**概念**

Splay树（伸展树）是BST，它的查找、插入、删除、分割、合并等操作，复杂度都是$O(logn)$的。最大的特点：可以把某个结点往上旋转到指定位置，特别是可以旋转到根的位置，成为新的根结点。一个应用：如果需要经常查询和使用一个数，那么把它旋转到根结点，下次访问它，只需要查一次就找到了。

例如：频繁查找5

<img src="讲义.assets/image-20240705212413982.png" alt="image-20240705212413982" style="zoom:50%;" />

**核心**

把结点旋转到根(提根)

**操作**

（1）单旋
做一次zig或zag。此时x已经旋转上升到距离根只有一层的位置，父结点f就是根，只需要做一次单旋即可。（和Treap树中的旋转法完全一样）

<img src="讲义.assets/image-20240705212857184.png" alt="image-20240705212857184" style="zoom:50%;" />

（2）一字旋
x、f、g在一条线上，做双旋zig-zig或zag-zag。若x是f的左儿子，f是g的左儿子，做两次zig；若都是右儿子，做两次zag。

<img src="讲义.assets/image-20240705213110576.png" alt="image-20240705213110576" style="zoom:50%;" />

（3）之字旋
x、f、g不在一条线上，做双旋zig-zag或zag-zig。若x是f的左儿子，f是g的右儿子，先zig和做zag；否则先zag再zig。

<img src="讲义.assets/image-20240705213225113.png" alt="image-20240705213225113" style="zoom:50%;" />

**旋转的复杂度**

- 旋转一次的时间是个常数。
- 把x从所在的深度提到根，总复杂度是多少?
  - 如果是平衡二叉树，最深的结点深度是$O(logn)$，总复杂度就是$O(logn)$。
  - 在**均摊**意义上，可以把Splay提根操作的复杂度看成是$O(logn)$。

**功能**

（1）旋转

splay(x, p)，把结点x旋转到位置p。

- p = 0表示把x旋到根，x是整棵树的根;
- p != 0，表示把x旋到p的子树上，p成为x的父亲。

（2）分裂

split (p，&L，&R)，p是排名或键值，按p把树分裂为两课树L、R。例如p是排名，把第p个结点x旋到根，然后断开x和右子树，以x为根的是L，右子树是R。

（3）合并

Merge(L,R)，合并两棵树L、R。**缺省条件是L的所有结点比R小**。首先把R的最小结点x旋到根，此时x没有左儿子，然后让L做x的左儿子，就合并了两棵树。也可以把L的最大结点旋到根，后续操作类似。

（4）插入

Insert()，先把新结点按BST的规则插入到一个空的叶子结点上，然后旋到根。

（5）删除

del()，把要删除的结点旋到根，删除它，然后合并它的左右儿子。

**代码**

```c++
void Rotate(int x){
	int y = fa[x],z = fa[y];//y为x的父结点，Z为x的祖父结点
    int b = (lc[y] == x) ? rc[x]:lc[x];
    //选取不以y->x同侧的X的儿子b，以维持BST性质
    fa[x] = z, fa[y] = x;//将x的父结点接到z上，y的父结点接到x
    if(b) fa[b] = y;//若b为空则不能将父结点接到y上
    if(z) (y == lc[z] ? lc[z] : rc[z]) = x; //以x接替y的位置
    if (x == lc[y]) rc[x] = y, lc[y] = b; //调整各结点之间的父子关系
    else lc[x] = y, rc[y] = b;
}
```

> https://www.bilibili.com/video/BV1gm4y1U7Hq
>
> https://www.bilibili.com/video/BV1BG4y1M7dB
>
> [数据结构\] 伸展树(Splay Tree)原理及若干应用详解（无指针）_splay tree 应用-CSDN博客](https://blog.csdn.net/ShadyPi/article/details/113523086)

#### 4、常见图

##### 偶图（二分图）(bipartite graph)

###### 偶图的定义

<img src="讲义.assets/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L2hwZGx6dTgwMTAw,size_16,color_FFFFFF,t_70.png" style="zoom:50%;" />

<img src="讲义.assets/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L2hwZGx6dTgwMTAw,size_16,color_FFFFFF,t_70-172023084526932.png" style="zoom:50%;" />

######  完全偶图（完全二分图）的定义

<img src="讲义.assets/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L2hwZGx6dTgwMTAw,size_16,color_FFFFFF,t_70-172023084161730.png" style="zoom:50%;" />

  

###### 偶图的充分必要条件

<img src="讲义.assets/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L2hwZGx6dTgwMTAw,size_16,color_FFFFFF,t_70-172023083861928.png" style="zoom:50%;" />

<img src="讲义.assets/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L2hwZGx6dTgwMTAw,size_16,color_FFFFFF,t_70-172023083661926.png" style="zoom:50%;" />

###### 匹配的引入

<img src="讲义.assets/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L2hwZGx6dTgwMTAw,size_16,color_FFFFFF,t_70-172023083403824.png" style="zoom:50%;" />

  

###### 偶图的匹配

<img src="讲义.assets/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L2hwZGx6dTgwMTAw,size_16,color_FFFFFF,t_70-172023083137822.png" style="zoom:50%;" />

######   匹配的判定条件（霍尔定理，t条件）

<img src="讲义.assets/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L2hwZGx6dTgwMTAw,size_16,color_FFFFFF,t_70-172023082833720.png" style="zoom:50%;" />

  

###### 匹配的应用

<img src="讲义.assets/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L2hwZGx6dTgwMTAw,size_16,color_FFFFFF,t_70-172023086645735.png" style="zoom:50%;" />

<img src="讲义.assets/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L2hwZGx6dTgwMTAw,size_16,color_FFFFFF,t_70-172023087015337.png" style="zoom:50%;" />

> [理解充分条件、充分不必要条件、必要条件和必要不充分条件 - luciusCheung - 博客园 (cnblogs.com)](https://www.cnblogs.com/luciusCheung/p/11062831.html)
>
> https://blog.csdn.net/hpdlzu80100/article/details/103254513

##### 欧拉图

###### 基本概念

回路：一条路径的起止顶点相同

开路：一条路径的起止顶点不相同

通过图G的每条边一次且仅一次的回路称为**欧拉回路**。存在欧拉回路的图，称为**欧拉图**。

通过图G的每条边一次且仅一次的开路称为**欧拉路**，对应的有**半欧拉图**。

###### 起源历史

       图论起源于18世纪，1736年瑞士数学家欧拉（Euler）发表了图论的第一篇论文“哥尼斯堡。在当时的哥尼斯堡城有一条横贯全市的普雷格尔河，河中的两个岛与两岸用七座桥连结起来。当时那里的居民热衷于一个难题：有游人怎样不重复地走遍七桥，最后回到出发点。为了解决这个问题，欧拉用A,B,C,D4个字母代替陆地，作为4个顶点，将联结两块陆地的桥用相应的线段表示，于是哥尼斯堡 七桥问题就变成了图中，是否存在经过每条边一次且仅一次，经过所有的顶点的回路问题了。欧拉在论文中指出，这样的回路是不存在的。

<img src="讲义.assets/format,png.png"  />



###### 相关定理

要想一个图G是**欧拉图**，图G需要满足两个条件：

- 有向图：

  - 图G是连通的，不能有孤立的点存在。

  - 每个顶点的入度要等于出度。

- 无向图：

  - 图G是连通的，不能有孤立的点存在。

  - 度数为奇数的点的个数为0。

要想一个图G是**半欧拉图**，图G需要满足两个条件：

- 有向图：

  - 图G是连通的，不能有孤立的点存在。

  - 存在两个顶点，其入度不等于出度，其中一点出度比入度大1，为路径起点，另一点入度比出度大1，为路径的终点


- 无向图：

  - 图G是连通的，不能有孤立的点存在。
  - 度数为奇数的点的个数为2，并且这两个点一定是路径的起点和终点。

<img src="讲义.assets/watermark,type_d3F5LXplbmhlaQ,shadow_50,text_Q1NETiBAU3RheS0taHVuZ3J5,size_20,color_FFFFFF,t_70,g_se,x_16#pic_center.png" alt="在这里插入图片描述" style="zoom:50%;" />

> [欧拉图的基本概念以及判定方法_怎么判断是不是欧拉图-CSDN博客](https://blog.csdn.net/qq_37521566/article/details/77072753)
>
> [离散数学9：二部图、欧拉图、哈密顿图-CSDN博客](https://blog.csdn.net/Shao_yihao/article/details/121653299)

##### 双连通图

###### 概念

是指一个图中任意两个顶点之间均存在至少两条相互独立的路径。换句话说，在双连通图中**移除任意一个顶点后,图中仍保持连通**（不存在割点/关节点）。

具体来说,一个图G是双连通的,当且仅当满足以下两个条件:

1. G是连通的,即任意两个顶点之间都存在路径相连。
2. 移除G中的任意一个顶点，剩余的子图仍然是连通的。

双连通图有很多重要的性质和应用,例如:

- 在网络系统中,双连通图可以提供高可靠性,因为即使有一个节点失效,网络通信仍然能保持畅通。
- 许多重要的算法如Tarjan算法都依赖于图的双连通性质。
- 双连通图有着很好的视觉特征,在信息可视化中常被用来展示复杂系统的拓扑结构。

#### 5、哈希表

###### 哈希法概念

哈希法又称散列法、杂凑法、关键字地址计算法。相对应的表称为哈希表、散列表、或杂凑表等。

###### 哈希法思想

首先在元素的关键字k和元素的存储位置p之间建立一个对应关系H，使得 p = H(k)，H成为哈希函数。创建哈希表时，把关键字为k的元素直接存入地址为H(k)的单元，以后查找关键字为k的元素时，再利用哈希函数计算该元素的存储位置。再按关键字存取元素。Hash中存储的key值都是唯一的。

###### 哈希冲突

当关键字集合很大的时候，关键字值不同的元素可能会映射到哈希表的同一个地址，即k1 != k2，H(k1) == H(k2)，这种现象称为**冲突**，此时k1和k2为同义词。事实上冲突是不可避免的，由于关键字可能发生冲突的集合远远大于实际开辟的哈希表长度 ，构成冲突的必然性，可通过改进哈希的性能来减少冲突，即降低冲突的可能性。

###### 优缺点

优点：查找速度极快 (O(1)) ,查找效率与元素个数n无关！

缺点：空间效率低

###### 构造原则

-   所选函数尽可能简单，以便提高转换速度；
-   所选函数对关键码计算出的地址，应在哈希地址集中大致均匀分布，以减少空间浪费。

##### 数值哈希函数构造、哈希冲突的常用处理方法

###### 哈希函数的构造方法

**（1）直接定址法**

Hash(key)=a \* key+b (a、b为常数)

优点：以关键码key的某个线性函数值为哈希地址，不会产生冲突.

缺点：要占用连续地址空间，空间效率低。

举例：

<img src="README.assets/9c40facd0c95626536674a1c0f526cae.png" alt="R60jmD.png" style="zoom:50%;" />

**（2）除留余数法**

Hash(key)=key mod p (p是一个整数)

特点：以关键码除以p的余数作为哈希地址。

关键：如何选取合适的p？

技巧：若设计的哈希表长为m，则一般取p≤m且为质数

**（3）数字分析法**

特点：某关键字的某几位组合成哈希地址。所选的位应当是：各种符号在该位上出现的频率大致相同

举例

<img src="README.assets/efac2a5b0b9b812f365b759a537c91ff.png" alt="R6DfIJ.png" style="zoom:50%;" />

**（4）平方取中法**

特点：对关键码平方后，按哈希表大小，取中间的若干位作为哈希地址

理由：因为中间几位与数据的每一位都相关

例：2589的平方值为6702921，可以取中间的029为地址

**（5）移位法**

特点：将关键码自左到右分成位数相等的几部分（最后一部分位数可以短些），然后将这几部分叠加求和，并按哈希表表长，取后几位作为哈希地址。

适用于：每一位上各符号出现概率大致相同的情况

**（6）折叠法**

将各部分的最后一位对齐相加间界叠加法，从一端向另一端沿分割界来回折叠后,最后一位对齐相加

举例：元素42751896  

移位法：427＋518＋96=1041  

间界叠加法：427 518 96—> 724+518+69 =1311

**（7）随机数法**

Hash(key)=random(key) (random为随机函数)

适用于：关键字长度不等的情况，造表和查找都很方便

###### 解决冲突的方法

**开放定址法**

设计思路：有冲突时就去寻找下一个空的哈希地址，只要哈希表足够大，空的哈希地址总能找到，并将数据元素存入。

1.线性探测法

Hi=(Hash(key)+di) mod m ( 1≤i < m )

其中：  Hash(key)为哈希函数  、m为哈希表长度  、di 为增量序列 1，2，…m-1，且di=i(含义：一旦冲突，就找附近(下一个)空地址存入)

举例：

<img src="README.assets/91d9c5ee316fba68cc34d4aaa823a798-17202376978025.png" alt="R6ci1s.png" style="zoom:50%;" />

线性探测法的优点：只要哈希表未被填满，保证能找到一个空地址单元存放有冲突的元素

线性探测法的缺点：可能使第i个哈希地址的同义词存入第i+1个哈希地址，这样本应存入第i+1个哈希地址的元素变成了第i+2个哈希地址的同义词，……，  
因此，可能出现很多元素在相邻的哈希地址上“堆积”起来，大大降低了查找效率

2.二次探测法

Hi=(Hash(key)±di) mod m

其中：Hash(key)为哈希函数 、m为哈希表长度，m要求是某个4k+3的质数； di为增量序列 1²，-1²，2²，-2²，…，q²

<img src="README.assets/ea50b4d4979677fd5d05ab60d48c0e76-17202377078407.png" alt="R6gVxA.png" style="zoom:50%;" />

3.伪随机探测法

若di为伪随机序列，就称为伪随机探测法

4.链地址法(拉链法)

基本思想：将具有相同哈希地址的记录链成一个单链表，m个哈希地址就设m个单链表，然后用一个数组将m个单链表的表头指针存储起来，形成一个动态的结构。

举例

<img src="README.assets/bf358a5b275600c1f7f1e014423ef08c-172023869309613.png" alt="R62Lc9.png" style="zoom:50%;" />

5.再哈希法(双哈希函数法)

Hi=RHi(key) i=1, 2, …，k  

RHi均是不同的哈希函数，当产生冲突时就计算另一个哈希函数，直到冲突不再发生。

优点：不易产生聚集

缺点：增加了计算时间、建立公共溢出区

思路：除设立哈希基本表外，另设一个溢出向量表，所有关键字和基本表中关键字为同义词的记录，不管它们由哈希函数得到的地址是什么，一旦发生冲突，都填入溢出表。

冲突是不是比较讨厌

不一定

正因为有冲突，使得文件加密后无法破译（不可逆，是单向散列函数，可用于数字签名）。

利用了哈希表性质：源文件稍稍改动，会导致哈希表变动很大。

哈希表的查找效率分析

使用平均查找长度ASL来衡量查找算法啊  
ASL取决于

-   哈希函数
-   处理冲突的方法
-   哈希表的装填因子α

α=表中填入的记录数/哈希表的长度

α越大，表中记录数越多，说明表装得越满，发生冲突的可能性就越大，查找时比较次数就越多。

<img src="README.assets/0d335f9df5ff71df62c587c16d8f295d-172023868855911.png" alt="R6WaZt.png" style="zoom:50%;" />

###### 结论

-   对哈希表技术具有很好的平均性能，优于一些传统的技术
-   链地址法优于开地址法
-   除留余数法作哈希函数优于其它类型函数

##### 字符串哈希函数构造

构造一个数字使之**唯一**代表一个字符串。但是为了将映射关系进行一一对应，也就是，一个字符串对应一个数字，那么一个数字也对应一个字符串。

用字符串Hash的目的是，我们如果要比较一个字符串，我们不直接比较字符串，而是比较它对应映射的数字，这样子就知道两个“子串”是否相等。从而达到，子串的Hash值的时间为 $O(1)$，进而可以利用“空间换时间”来节省时间复杂的。

> [各种字符串Hash函数对比](https://www.cnblogs.com/-clq/archive/2012/05/31/2528153.html)
>
> [字符串哈希 - OI Wiki (oi-wiki.org)](https://oi-wiki.org/string/hash/)
>
> [【算法学习】字符串哈希（Hash）_字符串hash-CSDN博客](https://blog.csdn.net/Mikchy/article/details/103995537)
>
> [哈希函数的常用构造方法 - 楼兰胡杨 - 博客园 (cnblogs.com)](https://www.cnblogs.com/east7/p/12607877.html)
>
> [数据结构期末复习-哈希表的6种构造方法和4种解决冲突方法_构造哈希表-CSDN博客](https://blog.csdn.net/weixin_52444045/article/details/118415957)

### 2.2.4 算法

#### 1、复杂度分析

数据结构和算法效率衡量的标准—**时间复杂度**和**空间复杂度**。

**事前分析估算方法**：在程序运行之前，在程序员编写程序时就进行代码时间复杂度和空间复杂度的估算，进而提高代码运行效率的一种手段。

**事后分析估算方法**：通过设计好的测试程序和数据，来统计和监控，利用计算机计时器对不同算法编制的程序的运行时间进行比较，从而确定算法效率的高低。

**时间复杂度（渐进时间复杂度(asymptotic time complexity)**：算法的执行时间与数据规模之间的增长关系

**空间复杂度（渐进空间复杂度(asymptotic space complexity)**：算法的存储空间与数据规模之间的增长关系。  

```
为什么需要复杂度分析，而不是直接使用事后统计法？

1.  事后统计法的测试结果非常依赖测试环境；比如不同的cpu或不同的电脑，运行速度的差异可能非常大，甚至有时候原本在这一台机器上执行A代码的速度比B代码要快，等我们换到另一台机器上时，可能会有截然相反的结果。
2.  测试结果受数据规模影响很大；比如，排序算法，待排序的数据有序度不一样，可能在执行时间上就会有很大的差别。极端情况下，假如数据已经是有序的，那排序算法不需要做任何操作，执行时间就会很短。除此之外，如果测试的数据规模太小，测试结果可能无法真实地反映算法的性能。（比如，对于小规模的数据排序，插入排序可能反倒比快速排序要快）。

所以我们需要一个不用具体的测试数据来测试，就可以粗略地估计算法的执行效率的方法。
```

##### 时间复杂度分析 

###### 大O复杂度表示法

假设有所有代码的执行时间T（n）与每行代码的执行次数成正比，那么大O复杂度表示为：T(n)=O(f(n))

n表示数据规模的大小；f(n)表示每行代码执行的次数总和； O代表代码的执行时间T（n）与 f(n) 表达式成正比。

**大O复杂度表示法并不具体表示代码真正的执行时间，而是表示代码执行时间随数据规模增长的变化趋势。所以也叫渐进时间复杂度。** 

当n很大时，公式中的低阶、常量、系数三部分并不改变增长的趋势，所以**只需要记录最大的量级**就好了。

1.  只需关注循环执行次数最多的一段代码；
2.  加法法则：总复杂度等于量级最大的那段代码的复杂度；
3.  乘法法则：嵌套代码的复杂度等于嵌套内外代码复杂度的乘积。

**O(1)** 

一般情况下，只要算法中不存在循环语句，递归语句，即使有成千上万行的代码，其时间复杂度也是O（1）。  

**O(n)** 

算法中有n次循环语句，且其他语句复杂度都为1，这个算法的时间复杂度为O(n)。  

**O(logn)、O(nlogn)**

```c++
i=1;
while(i<=n){
    i=i*3;
}
```

诸如此类，时间复杂度为O(logn)，如果此循环外再套一个复杂度为O(n)的循环，则总体的时间复杂度就为O(nlogn)。  

**O(m+n)、O(m\*n)**

```c++
int cal(int m, int n) {
  int sum_1 = 0;
  int i = 1;
  for (; i < m; ++i) {
    sum_1 = sum_1 + i;
  }
  int sum_2 = 0;
  int j = 1;
  for (; j < n; ++j) {
    sum_2 = sum_2 + j;
  }

  return sum_1 + sum_2;
}
```

当存在多个数据规模,且无法判断哪个数据规模大的时候,无法直接套用加法法则,需要保留多个数据规模。时间复杂度为O(m+n)。

当循环嵌套时，嵌套代码的复杂度等于嵌套内外代码复杂度的乘积，复杂度为O(m\*n)。

**我们常见的空间复杂度就是 O(1) O(n) O(n2 ),像 O(logn) O(nlogn) 这样的对数阶复杂度平时很少用到。**

###### 常见时间复杂度与增长速度

<img src="README.assets/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L0NoYXJsZXNzc3lhbmc=,size_16,color_FFFFFF,t_70#pic_center.jpeg" alt="时间复杂度" style="zoom: 33%;" />

###### 最好、最坏与平均时间复杂度

**最好情况时间复杂度**：在最理想的情况下，执行这段代码的时间复杂度。 

**最坏情况时间复杂度**：在最糟糕的情况下，执行这段代码的时间复杂度。

比如遍历长度为n的数组去找一个特定元素，如果数组第一个元素就是该元素，则时间复杂度为O(1)，为最好情况时间复杂度，若最后一个元素是该元素或该元素根本不存在于该数组中，则为最坏情况时间复杂度，为O(n)。

依然在长度为n的队列中查找变量x,而我们这一次查找到x之后就直接退出循环。

```c++
// n表示数组array的长度
int find(int[] array, int n, int x) {
  int i = 0;
  int pos = -1;
  for (; i < n; ++i) {
    if (array[i] == x) {
       pos = i;
       break;
    }
  }
  return pos;
}
```

这种情况下，要查找的变量 x，要么在数组里，要么就不在数组里。这两种情况对应的概率统计起来很麻烦，为了方便你理解，我们假设在数组中与不在数组中的概率都为 1/2。另外，要查找的数据出现在 0～n-1 这 n 个位置的概率也是一样的，为 1/n。所以，根据概率乘法法则，要查找的数据出现在 0～n-1 中任意位置的概率就是 1/(2n)。所以总概率为： 

<img src="README.assets/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L0NoYXJsZXNzc3lhbmc=,size_16,color_FFFFFF,t_70.png" alt="概率" style="zoom:50%;" />

**这个值就是概率论中的加权平均值，也叫作期望值，所以平均时间复杂度的全称应该叫加权平均时间复杂度或者期望时间复杂度。**

*注意：只有同一块代码在不同的情况下，时间复杂度有量级的差距时！！我们才会使用这三种复杂度表示法来区分。*  

> [复杂度分析——时间复杂度和空间复杂度（超详细总结）_空间复杂度分析-CSDN博客](https://blog.csdn.net/Charlesssyang/article/details/110362769)

#### 2、算法策略

#### 3、基础算法

#### 4、排序算法

##### 基数排序

#### 5、字符串相关算法

##### 字符串匹配：KMP 算法

#### 6、搜索算法

##### 搜索的剪枝优化

##### 记忆化搜索

##### 启发式搜索

##### 双向广度优先搜索

##### 迭代加深搜索

#### 7、图论算法

##### 次小生成树

##### 单源次短路

##### 欧拉道路和欧拉回路

##### 二分图的判定

##### 割点、割边

##### 树的重心、直径、DFS 序与欧拉序

##### 树上差分、子树和与倍增

#### 8、动态规划

##### 状态压缩动态规划

##### 动态规划的常用优化

### 2.2.5 数学与其他

#### 1、初等数学

##### 代数（高中部分）

##### 几何（高中部分）

#### 2、初等数论

##### 同余式

##### 欧拉定理和欧拉函数

##### 费马小定理

##### 威尔逊定理

##### 裴蜀定理

##### 模运算意义下的逆元

##### 扩展欧几里得算法

##### 中国剩余定理

#### 3、离散与组合数学

##### 多重集合

##### 等价类

##### 多重集上的排列

##### 多重集上的组合

##### 错排列、圆排列

##### 鸽巢原理

##### 二项式定理

##### 容斥原理

##### 卡特兰（Catalan）数

#### 4、线性代数

##### 向量与矩阵的概念

##### 向量的运算

##### 矩阵的初等变换

##### 矩阵的运算：加法、减法、乘法与转置

##### 特殊矩阵的概念：单位阵、三角阵、对称阵和稀疏矩阵

##### 高斯消元法

##  2.3 NOI 级