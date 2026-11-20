
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10120500 <.text+0x11f500>:
10120500:	55                   	push   ebp
10120501:	8b ec                	mov    ebp,esp
10120503:	57                   	push   edi
10120504:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
10120507:	f6 87 18 01 00 00 80 	test   BYTE PTR [edi+0x118],0x80
1012050e:	0f 85 fc 00 00 00    	jne    0x10120610
10120514:	56                   	push   esi
10120515:	8b 35 60 1f 23 10    	mov    esi,DWORD PTR ds:0x10231f60
1012051b:	85 f6                	test   esi,esi
1012051d:	74 03                	je     0x10120522
1012051f:	83 ee 80             	sub    esi,0xffffff80
10120522:	f3 0f 7e 47 50       	movq   xmm0,QWORD PTR [edi+0x50]
10120527:	66 0f d6 46 50       	movq   QWORD PTR [esi+0x50],xmm0
1012052c:	8b 47 58             	mov    eax,DWORD PTR [edi+0x58]
1012052f:	89 46 58             	mov    DWORD PTR [esi+0x58],eax
10120532:	8b 87 b8 00 00 00    	mov    eax,DWORD PTR [edi+0xb8]
10120538:	89 86 b8 00 00 00    	mov    DWORD PTR [esi+0xb8],eax
1012053e:	8b 87 b4 00 00 00    	mov    eax,DWORD PTR [edi+0xb4]
10120544:	89 86 b4 00 00 00    	mov    DWORD PTR [esi+0xb4],eax
1012054a:	8b 87 34 01 00 00    	mov    eax,DWORD PTR [edi+0x134]
10120550:	89 86 34 01 00 00    	mov    DWORD PTR [esi+0x134],eax
10120556:	8b 87 ac 01 00 00    	mov    eax,DWORD PTR [edi+0x1ac]
1012055c:	89 86 ac 01 00 00    	mov    DWORD PTR [esi+0x1ac],eax
10120562:	c7 86 08 01 00 00 06 	mov    DWORD PTR [esi+0x108],0x6
10120569:	00 00 00 
1012056c:	f3 0f 7e 47 20       	movq   xmm0,QWORD PTR [edi+0x20]
10120571:	66 0f d6 46 20       	movq   QWORD PTR [esi+0x20],xmm0
10120576:	8b 47 28             	mov    eax,DWORD PTR [edi+0x28]
10120579:	89 46 28             	mov    DWORD PTR [esi+0x28],eax
1012057c:	c7 86 a8 01 00 00 00 	mov    DWORD PTR [esi+0x1a8],0x0
10120583:	00 00 00 
10120586:	8b 87 74 01 00 00    	mov    eax,DWORD PTR [edi+0x174]
1012058c:	89 86 74 01 00 00    	mov    DWORD PTR [esi+0x174],eax
10120592:	c7 86 60 01 00 00 11 	mov    DWORD PTR [esi+0x160],0x11
10120599:	00 00 00 
1012059c:	ff b7 0c 02 00 00    	push   DWORD PTR [edi+0x20c]
101205a2:	ff 15 64 30 22 10    	call   DWORD PTR ds:0x10223064
101205a8:	66 0f 6e c0          	movd   xmm0,eax
101205ac:	0f 5b c0             	cvtdq2ps xmm0,xmm0
101205af:	f3 0f 11 86 50 01 00 	movss  DWORD PTR [esi+0x150],xmm0
101205b6:	00 
101205b7:	8b 87 18 01 00 00    	mov    eax,DWORD PTR [edi+0x118]
101205bd:	83 c8 20             	or     eax,0x20
101205c0:	89 86 18 01 00 00    	mov    DWORD PTR [esi+0x118],eax
101205c6:	8b 87 2c 01 00 00    	mov    eax,DWORD PTR [edi+0x12c]
101205cc:	89 86 2c 01 00 00    	mov    DWORD PTR [esi+0x12c],eax
101205d2:	8b 87 38 01 00 00    	mov    eax,DWORD PTR [edi+0x138]
101205d8:	89 86 38 01 00 00    	mov    DWORD PTR [esi+0x138],eax
101205de:	8d 47 08             	lea    eax,[edi+0x8]
101205e1:	50                   	push   eax
101205e2:	ff 35 60 1f 23 10    	push   DWORD PTR ds:0x10231f60
101205e8:	e8 b3 99 ff ff       	call   0x10119fa0
101205ed:	8d 87 e8 00 00 00    	lea    eax,[edi+0xe8]
101205f3:	50                   	push   eax
101205f4:	8d 87 dc 00 00 00    	lea    eax,[edi+0xdc]
101205fa:	50                   	push   eax
101205fb:	56                   	push   esi
101205fc:	e8 2f 9a ff ff       	call   0x1011a030
10120601:	8b 86 9c 01 00 00    	mov    eax,DWORD PTR [esi+0x19c]
10120607:	83 c4 18             	add    esp,0x18
1012060a:	a3 60 1f 23 10       	mov    ds:0x10231f60,eax
1012060f:	5e                   	pop    esi
10120610:	5f                   	pop    edi
10120611:	5d                   	pop    ebp
10120612:	c3                   	ret
