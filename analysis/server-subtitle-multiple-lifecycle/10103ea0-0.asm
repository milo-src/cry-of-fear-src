
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10103ea0 <.text+0x102ea0>:
10103ea0:	56                   	push   esi
10103ea1:	8b f1                	mov    esi,ecx
10103ea3:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10103ea6:	83 c0 08             	add    eax,0x8
10103ea9:	50                   	push   eax
10103eaa:	56                   	push   esi
10103eab:	e8 30 61 01 00       	call   0x10119fe0
10103eb0:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10103eb3:	83 c4 08             	add    esp,0x8
10103eb6:	c7 80 0c 01 00 00 00 	mov    DWORD PTR [eax+0x10c],0x0
10103ebd:	00 00 00 
10103ec0:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10103ec3:	c7 80 18 01 00 00 80 	mov    DWORD PTR [eax+0x118],0x80
10103eca:	00 00 00 
10103ecd:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
10103ed0:	f3 0f 7e 05 34 2f 22 	movq   xmm0,QWORD PTR ds:0x10222f34
10103ed7:	10 
10103ed8:	66 0f d6 41 74       	movq   QWORD PTR [ecx+0x74],xmm0
10103edd:	a1 3c 2f 22 10       	mov    eax,ds:0x10222f3c
10103ee2:	89 41 7c             	mov    DWORD PTR [ecx+0x7c],eax
10103ee5:	83 be dc 01 00 00 00 	cmp    DWORD PTR [esi+0x1dc],0x0
10103eec:	75 0a                	jne    0x10103ef8
10103eee:	c7 86 dc 01 00 00 01 	mov    DWORD PTR [esi+0x1dc],0x1
10103ef5:	00 00 00 
10103ef8:	5e                   	pop    esi
10103ef9:	c3                   	ret
