#include <iostream>
using namespace std;

/* Elemen Linked List */
template <class T>
class ElmtLList{
	private:
		T data;
		ElmtLList *next;
	public:
		ElmtLList(T);
		ElmtLList(const ElmtLList&);
		~ElmtLList();
		ElmtLList& operator =(const ElmtLList&);
		T getData() const;
		ElmtLList* getNext() const;
		void setData(T);
		void setNext(ElmtLList*);
};
template <class T>
ElmtLList<T>::ElmtLList(T data):next(NULL){
	this->data = data;
}
template <class T>
ElmtLList<T>::ElmtLList(const ElmtLList& E){
	data = E.data;
	next = E.next;
}
template <class T>
ElmtLList<T>::~ElmtLList(){
}
template <class T>
ElmtLList<T>& ElmtLList<T>::operator =(const ElmtLList& E){
	data = E.data;
	next = E.next;
	return *this;
}
template <class T>
T ElmtLList<T>::getData() const{
	return data;
}
template <class T>
ElmtLList<T>* ElmtLList<T>::getNext() const{
	return next;
}
template <class T>
void ElmtLList<T>::setData(T data){
	this->data = data;
}
template <class T>
void ElmtLList<T>::setNext(ElmtLList* PtE){
	next = PtE;
}

/* Linked List */
template <class T>
class LList{
	private:
		ElmtLList<T>* first;
	public:
		LList();
		LList(T);
		LList(const LList&);
		~LList();
		LList& operator=(const LList&);
		/*	isEmpty()
			Method ini mengembalikan nilai True jika linked list kosong, dan False jika sebaliknya */
		bool isEmpty() const;
		/*	add(T element) → void
			Method ini menambahkan elemen sebagai elemen paling belakang pada LinkedList */
		void add(T);
		/*	remove(T element) → void
			Method ini membuang elemen dengan identitas demikian */
		void remove(T);
		/*	get(int index) → T
			Method ini mengembalikan elemen dengan tipe T pada indeks ke-i. */
		T get(int) const;
		/*	find(T element) → int
			Method ini mengembalikan indeks di mana elemen berada pada linked list , dan -1 jika tidak ada */
		int find(T) const;
		/* Print isi list */
		template <class U>
		friend ostream& operator<<(ostream&,const LList<U>&);
};

template <class T>
LList<T>::LList():first(NULL){
}
template <class T>
LList<T>::LList(T data){
	first = new ElmtLList<T>(data);
}
template <class T>
LList<T>::LList(const LList& LL){
	first = NULL;
	ElmtLList<T> *Pt = LL.first;
	while(Pt!= NULL){
		add(Pt->getData());
		Pt = Pt->getNext();
	}
}
template <class T>
LList<T>::~LList(){
	ElmtLList<T>* Pt = first;
	ElmtLList<T>* Ptd;
	while(Pt != NULL){
		Ptd = Pt;
		Pt = Pt->getNext();
		delete Ptd;
	}
}
template <class T>
LList<T>& LList<T>::operator=(const LList& LL){
	ElmtLList<T>* Ptd = first;
	while(Ptd != NULL){
		delete Ptd;
	}
	first = NULL;
	ElmtLList<T> *Pt = LL.first;
	while(Pt!= NULL){
		add(Pt->getData());
		Pt = Pt->getNext();
	}
	return *this;
}
template <class T>
bool LList<T>::isEmpty() const{
	return first == NULL;
}
template <class T>
void LList<T>::add(T data){
	if(!isEmpty()){
		ElmtLList<T>* Pt = first;
		while(Pt->getNext() != NULL){
			Pt = Pt->getNext();
		}
		ElmtLList<T>* PNewElm = new ElmtLList<T>(data);
		Pt->setNext(PNewElm);
	}else{
		first = new ElmtLList<T>(data);
	}
}
template <class T>
void LList<T>::remove(T data){
	ElmtLList<T>* Pt = first;
	ElmtLList<T>* Prec = NULL;
	while(Pt != NULL){
		if(Pt->getData() == data){
			if(Pt == first){
				first = Pt->getNext();
				delete Pt;
				Pt = first;
			}else{
				Prec->setNext(Pt->getNext());
				delete Pt;
				Pt = Prec->getNext();
			}
		}else{
			Prec = Pt;
			Pt = Pt->getNext();
		}
		
	}
}
template <class T>
T LList<T>::get(int i) const{
	int count = 0;
	ElmtLList<T>* Pt = first;
	while(count<i){
		Pt = Pt->getNext();
		count++;
	}
	return Pt->getData();
}
template <class T>
int LList<T>::find(T data) const{
	int idx = 0;
	bool f = false;
	ElmtLList<T>* Pt = first;
	while(Pt != NULL){
		if(Pt->getData() == data){
			f = true;
			break;
		}
		else{
			Pt = Pt->getNext();
			idx++;
		}
	}
	if(f){
		return idx;
	}
	return -1;
}
template <class T>
ostream& operator<<(ostream& o,const LList<T>& L){
	ElmtLList<T> *Pt = L.first;
	while(Pt != NULL){
		o << Pt->getData() << endl;
		Pt = Pt->getNext();
	}
	return o;
}
