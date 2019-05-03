/************************
 *Name: Kristen Qako
 *Date: 4/30/2019
 *Specification file: Sortable_list.h
 *Declares all the public and private members to implement the sorting algorithms
 *
 ************************/
#include "key.h"
#include "list.h"

#ifndef SORT_H
#define SORT_H
template<class Record>
class Sortable_list: public List<Record> {
  public:
  	void insertion_sort();
  	void selection_sort();
  	void merge_sort();
    void quick_sort();
    void bubble_sort();
  private:
    int max_key(int low, int high);
    void swap(int low, int high);
    void merge(int low, int high);
    void recursive_merge_sort(int low, int high);
    int partition(int low, int high);
    void recursive_quick_sort(int low, int high);
};

#endif
