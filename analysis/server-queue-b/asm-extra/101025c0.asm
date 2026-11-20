
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

101025c0 <.text+0x1015c0>:
101025c0:	55                   	push   ebp
101025c1:	8b ec                	mov    ebp,esp
101025c3:	f3 0f 10 45 14       	movss  xmm0,DWORD PTR [ebp+0x14]
101025c8:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
101025cb:	f3 0f 11 81 64 01 00 	movss  DWORD PTR [ecx+0x164],xmm0
101025d2:	00 
101025d3:	f3 0f 7e 45 08       	movq   xmm0,QWORD PTR [ebp+0x8]
101025d8:	66 0f d6 81 58 01 00 	movq   QWORD PTR [ecx+0x158],xmm0
101025df:	00 
101025e0:	51                   	push   ecx
101025e1:	89 81 60 01 00 00    	mov    DWORD PTR [ecx+0x160],eax
101025e7:	c7 41 78 e0 26 10 10 	mov    DWORD PTR [ecx+0x78],0x101026e0
101025ee:	e8 5d 22 fc ff       	call   0x100c4850
101025f3:	83 c4 04             	add    esp,0x4
101025f6:	5d                   	pop    ebp
101025f7:	c2 10 00             	ret    0x10
