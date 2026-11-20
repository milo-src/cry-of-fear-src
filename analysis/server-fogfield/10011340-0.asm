
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10011340 <.text+0x10340>:
10011340:	56                   	push   esi
10011341:	8b f1                	mov    esi,ecx
10011343:	8b 06                	mov    eax,DWORD PTR [esi]
10011345:	ff 50 30             	call   DWORD PTR [eax+0x30]
10011348:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
1001134b:	f3 0f 7e 05 34 2f 22 	movq   xmm0,QWORD PTR ds:0x10222f34
10011352:	10 
10011353:	66 0f d6 42 50       	movq   QWORD PTR [edx+0x50],xmm0
10011358:	a1 3c 2f 22 10       	mov    eax,ds:0x10222f3c
1001135d:	89 42 58             	mov    DWORD PTR [edx+0x58],eax
10011360:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10011363:	c7 80 08 01 00 00 00 	mov    DWORD PTR [eax+0x108],0x0
1001136a:	00 00 00 
1001136d:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10011370:	c7 80 0c 01 00 00 00 	mov    DWORD PTR [eax+0x10c],0x0
10011377:	00 00 00 
1001137a:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
1001137d:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10011382:	8b 8a b8 00 00 00    	mov    ecx,DWORD PTR [edx+0xb8]
10011388:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
1001138e:	51                   	push   ecx
1001138f:	ff b2 0c 02 00 00    	push   DWORD PTR [edx+0x20c]
10011395:	ff 15 50 2f 22 10    	call   DWORD PTR ds:0x10222f50
1001139b:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1001139e:	83 c0 08             	add    eax,0x8
100113a1:	50                   	push   eax
100113a2:	56                   	push   esi
100113a3:	e8 38 8c 10 00       	call   0x10119fe0
100113a8:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100113ab:	83 c4 10             	add    esp,0x10
100113ae:	8b ce                	mov    ecx,esi
100113b0:	81 88 18 01 00 00 80 	or     DWORD PTR [eax+0x118],0x80
100113b7:	00 00 00 
100113ba:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100113bd:	f6 80 a4 01 00 00 02 	test   BYTE PTR [eax+0x1a4],0x2
100113c4:	74 11                	je     0x100113d7
100113c6:	e8 75 0e 00 00       	call   0x10012240
100113cb:	c7 86 80 00 00 00 a0 	mov    DWORD PTR [esi+0x80],0x100101a0
100113d2:	01 01 10 
100113d5:	5e                   	pop    esi
100113d6:	c3                   	ret
100113d7:	e8 04 0e 00 00       	call   0x100121e0
100113dc:	c7 86 80 00 00 00 a0 	mov    DWORD PTR [esi+0x80],0x100101a0
100113e3:	01 01 10 
100113e6:	5e                   	pop    esi
100113e7:	c3                   	ret
