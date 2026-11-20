
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10104540 <.text+0x103540>:
10104540:	57                   	push   edi
10104541:	8b f9                	mov    edi,ecx
10104543:	8b 07                	mov    eax,DWORD PTR [edi]
10104545:	ff 90 44 02 00 00    	call   DWORD PTR [eax+0x244]
1010454b:	85 c0                	test   eax,eax
1010454d:	75 02                	jne    0x10104551
1010454f:	5f                   	pop    edi
10104550:	c3                   	ret
10104551:	56                   	push   esi
10104552:	8b 37                	mov    esi,DWORD PTR [edi]
10104554:	83 ec 10             	sub    esp,0x10
10104557:	c7 44 24 0c 00 00 00 	mov    DWORD PTR [esp+0xc],0x40000000
1010455e:	40 
1010455f:	c7 44 24 08 00 00 80 	mov    DWORD PTR [esp+0x8],0x3f800000
10104566:	3f 
10104567:	c7 44 24 04 00 00 f0 	mov    DWORD PTR [esp+0x4],0x40f00000
1010456e:	40 
1010456f:	c7 04 24 00 00 a0 40 	mov    DWORD PTR [esp],0x40a00000
10104576:	ff 15 b4 30 22 10    	call   DWORD PTR ds:0x102230b4
1010457c:	83 c4 04             	add    esp,0x4
1010457f:	8b cf                	mov    ecx,edi
10104581:	d9 1c 24             	fstp   DWORD PTR [esp]
10104584:	ff b7 80 03 00 00    	push   DWORD PTR [edi+0x380]
1010458a:	ff 96 a0 01 00 00    	call   DWORD PTR [esi+0x1a0]
10104590:	6a 01                	push   0x1
10104592:	8b cf                	mov    ecx,edi
10104594:	e8 d7 00 00 00       	call   0x10104670
10104599:	50                   	push   eax
1010459a:	8d 8f e0 03 00 00    	lea    ecx,[edi+0x3e0]
101045a0:	e8 9b 31 f1 ff       	call   0x10017740
101045a5:	5e                   	pop    esi
101045a6:	b8 01 00 00 00       	mov    eax,0x1
101045ab:	5f                   	pop    edi
101045ac:	c3                   	ret
