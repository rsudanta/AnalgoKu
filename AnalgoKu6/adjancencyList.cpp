/*
Nama	:Muhammad Risqullah Sudanta Gorau
NPM		:140810180066
Kelas 	:B
Tanggal	:7/04/20
Program	: Adjacency List
*/


/*
* C++ Program to Implement Adjacency List
*/
#include <iostream>
#include <cstdlib>
using namespace std;
/*
* Adjacency List Node
*/ 
struct AdjListNode{
    int dest;
    struct AdjListNode* next;
};

/*
* Adjacency List
*/  
struct AdjList{
    struct AdjListNode *head;
};

/*
* Class Graph
*/ 
class Graph{
    private:
        int V;
        struct AdjList* array;
    public:
        Graph(int V)
        {
            this->V = V;
            array = new AdjList [V];
            for (int i = 1; i <= V; ++i)
                array[i].head = NULL;
        }
        /*
        * Creating New Adjacency List Node
        */ 
        AdjListNode* newAdjListNode(int dest)
        {
            AdjListNode* newNode = new AdjListNode;
            newNode->dest = dest;
            newNode->next = NULL;
            return newNode;
        }
        /*
        * Adding Edge to Graph
        */ 
        void addEdge(int src, int dest)
        {
            AdjListNode* newNode = newAdjListNode(dest);
            newNode->next = array[src].head;
            array[src].head = newNode;
            newNode = newAdjListNode(src);
            newNode->next = array[dest].head;
            array[dest].head = newNode;
        }
        /*
        * Print the graph
        */ 
        void printGraph()
        {
            int v;
            for (v = 1; v <= V; ++v)
            {
                AdjListNode* pCrawl = array[v].head;
                cout << "\n Adjacency list of vertex " << v << "\n head ";
                while (pCrawl)
                {
                    cout<<"-> "<<pCrawl->dest;
                    pCrawl = pCrawl->next;
                }
                cout<<endl;
            }
        }
};


int main()
{
    Graph g(8);
    g.addEdge(7, 8);
	g.addEdge(5, 6);
 	g.addEdge(3, 8);
 	g.addEdge(3, 7);
 	g.addEdge(4, 5);
 	g.addEdge(5, 3);
 	g.addEdge(2, 5);
 	g.addEdge(2, 4);
 	g.addEdge(2, 3);
 	g.addEdge(1, 3);
 	g.addEdge(1, 2);
 	
 	g.printGraph();
}
    

