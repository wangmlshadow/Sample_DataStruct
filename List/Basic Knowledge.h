#pragma once
/*
线性表（linear_list）：
	n个数据元素的有限序列
	每个数据元素由若干数据项（item）组成，常将数据元素称为记录（record），含有大量记录
	的线性表又称为文件。

	线性表的顺序实现：
		用一组地址连续的存储单元依次存储线性表的数据元素。
		再用C语言实现时，需要在线性表初始化时分配一定大小的初始存储空间，但随着初始空间
		被占用，需要考虑每次线性表空间增量的问题，下面实现仅仅是简单的选择一个空间增量，
		在线性表满时重新分配空间。

		顺序表的优缺点：
		可以随机取表中任一元素，它的存储位置可用简单直观的公式表示：base + (pos-1) * sizeof(ElemType)
		在插入与删除时需移动大量元素

	线性表的链式表示和实现：
		链式实现并不要求逻辑上相邻的元素在物理位置上也相邻
		链式存储结构使用一组任意存储单元存储线性表的数据元素，这些存储单元可以连续也可以不连续，为了
		表示每个数据元素与其后继元素之间的逻辑关系，每个数据元素除了存储其自身的数据信息，还需存储其
		后继的存储位置信息，即对应于每个结点包含的数据域和指针域，各个数据元素通过指针域连接成链表。


	循环链表：最后一个结点的指针域指向头结点，整个链表形成一个环

	双向链表：
	    在单链表中，查询一个结点的前驱需要从头指针出发，为克服单链表这种单向性的缺点，可以利用双向链表
        
		双向链表的结点中有两个指针域，其中一个指向前驱，一个指向后继


	栈：
		限定仅在表尾进行插入或删除操作的线性表
		表尾端称为栈顶(top)，表头端称为栈底(bottom)
		特点：在栈中，后入栈的元素先
		出栈
	    
*/