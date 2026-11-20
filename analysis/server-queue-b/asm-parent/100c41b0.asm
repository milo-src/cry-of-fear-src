
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100c41b0 <.text+0xc31b0>:
100c41b0:	55                   	push   ebp
100c41b1:	8b ec                	mov    ebp,esp
100c41b3:	56                   	push   esi
100c41b4:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
100c41b7:	8b 46 60             	mov    eax,DWORD PTR [esi+0x60]
100c41ba:	a8 08                	test   al,0x8
100c41bc:	74 2f                	je     0x100c41ed
100c41be:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100c41c1:	f3 0f 7e 46 40       	movq   xmm0,QWORD PTR [esi+0x40]
100c41c6:	66 0f d6 41 20       	movq   QWORD PTR [ecx+0x20],xmm0
100c41cb:	8b 46 48             	mov    eax,DWORD PTR [esi+0x48]
100c41ce:	89 41 28             	mov    DWORD PTR [ecx+0x28],eax
100c41d1:	f3 0f 7e 05 34 2f 22 	movq   xmm0,QWORD PTR ds:0x10222f34
100c41d8:	10 
100c41d9:	66 0f d6 46 40       	movq   QWORD PTR [esi+0x40],xmm0
100c41de:	a1 3c 2f 22 10       	mov    eax,ds:0x10222f3c
100c41e3:	83 66 60 f7          	and    DWORD PTR [esi+0x60],0xfffffff7
100c41e7:	89 46 48             	mov    DWORD PTR [esi+0x48],eax
100c41ea:	8b 46 60             	mov    eax,DWORD PTR [esi+0x60]
100c41ed:	a8 10                	test   al,0x10
100c41ef:	74 2c                	je     0x100c421d
100c41f1:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100c41f4:	f3 0f 7e 46 4c       	movq   xmm0,QWORD PTR [esi+0x4c]
100c41f9:	66 0f d6 41 5c       	movq   QWORD PTR [ecx+0x5c],xmm0
100c41fe:	8b 46 54             	mov    eax,DWORD PTR [esi+0x54]
100c4201:	89 41 64             	mov    DWORD PTR [ecx+0x64],eax
100c4204:	f3 0f 7e 05 34 2f 22 	movq   xmm0,QWORD PTR ds:0x10222f34
100c420b:	10 
100c420c:	66 0f d6 46 4c       	movq   QWORD PTR [esi+0x4c],xmm0
100c4211:	a1 3c 2f 22 10       	mov    eax,ds:0x10222f3c
100c4216:	83 66 60 ef          	and    DWORD PTR [esi+0x60],0xffffffef
100c421a:	89 46 54             	mov    DWORD PTR [esi+0x54],eax
100c421d:	8b 76 1c             	mov    esi,DWORD PTR [esi+0x1c]
100c4220:	85 f6                	test   esi,esi
100c4222:	74 10                	je     0x100c4234
100c4224:	56                   	push   esi
100c4225:	e8 86 ff ff ff       	call   0x100c41b0
100c422a:	8b 76 20             	mov    esi,DWORD PTR [esi+0x20]
100c422d:	83 c4 04             	add    esp,0x4
100c4230:	85 f6                	test   esi,esi
100c4232:	75 f0                	jne    0x100c4224
100c4234:	5e                   	pop    esi
100c4235:	5d                   	pop    ebp
100c4236:	c3                   	ret
