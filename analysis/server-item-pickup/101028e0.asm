
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

101028e0 <.text+0x1018e0>:
101028e0:	56                   	push   esi
101028e1:	8b f1                	mov    esi,ecx
101028e3:	e8 68 03 00 00       	call   0x10102c50
101028e8:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
101028eb:	0f 57 c0             	xorps  xmm0,xmm0
101028ee:	f3 0f 10 88 64 01 00 	movss  xmm1,DWORD PTR [eax+0x164]
101028f5:	00 
101028f6:	0f 2f c8             	comiss xmm1,xmm0
101028f9:	76 1d                	jbe    0x10102918
101028fb:	68 4c f4 1d 10       	push   0x101df44c
10102900:	6a 02                	push   0x2
10102902:	c7 80 64 01 00 00 00 	mov    DWORD PTR [eax+0x164],0x0
10102909:	00 00 00 
1010290c:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
10102912:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10102915:	83 c4 08             	add    esp,0x8
10102918:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1010291e:	ff 15 a0 2f 22 10    	call   DWORD PTR ds:0x10222fa0
10102924:	83 c4 04             	add    esp,0x4
10102927:	5e                   	pop    esi
10102928:	c3                   	ret
