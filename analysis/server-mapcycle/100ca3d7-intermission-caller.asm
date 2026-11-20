
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100ca3d7 <.text+0xc93d7>:
100ca3d7:	83 3d 04 2f 22 10 00 	cmp    DWORD PTR ds:0x10222f04,0x0
100ca3de:	0f 84 9f 00 00 00    	je     0x100ca483
100ca3e4:	68 f8 b6 1c 10       	push   0x101cb6f8
100ca3e9:	ff 15 2c 30 22 10    	call   DWORD PTR ds:0x1022302c
100ca3ef:	d9 9d 70 ff ff ff    	fstp   DWORD PTR [ebp-0x90]
100ca3f5:	f3 0f 2c 85 70 ff ff 	cvttss2si eax,DWORD PTR [ebp-0x90]
100ca3fc:	ff 
100ca3fd:	83 c4 04             	add    esp,0x4
100ca400:	83 f8 01             	cmp    eax,0x1
100ca403:	7d 15                	jge    0x100ca41a
100ca405:	68 f4 e9 1b 10       	push   0x101be9f4
100ca40a:	68 f8 b6 1c 10       	push   0x101cb6f8
100ca40f:	ff 15 38 30 22 10    	call   DWORD PTR ds:0x10223038
100ca415:	83 c4 08             	add    esp,0x8
100ca418:	eb 1b                	jmp    0x100ca435
100ca41a:	83 f8 78             	cmp    eax,0x78
100ca41d:	7e 16                	jle    0x100ca435
100ca41f:	6a 78                	push   0x78
100ca421:	e8 0a 07 05 00       	call   0x1011ab30
100ca426:	50                   	push   eax
100ca427:	68 f8 b6 1c 10       	push   0x101cb6f8
100ca42c:	ff 15 38 30 22 10    	call   DWORD PTR ds:0x10223038
100ca432:	83 c4 0c             	add    esp,0xc
100ca435:	f3 0f 10 05 b0 48 21 	movss  xmm0,DWORD PTR ds:0x102148b0
100ca43c:	10 
100ca43d:	f3 0f 58 05 98 31 22 	addss  xmm0,DWORD PTR ds:0x10223198
100ca444:	10 
100ca445:	f3 0f 11 83 dc 00 00 	movss  DWORD PTR [ebx+0xdc],xmm0
100ca44c:	00 
100ca44d:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100ca452:	f3 0f 10 08          	movss  xmm1,DWORD PTR [eax]
100ca456:	0f 2f c8             	comiss xmm1,xmm0
100ca459:	76 28                	jbe    0x100ca483
100ca45b:	83 bb e0 00 00 00 00 	cmp    DWORD PTR [ebx+0xe0],0x0
100ca462:	75 15                	jne    0x100ca479
100ca464:	f3 0f 10 05 98 31 22 	movss  xmm0,DWORD PTR ds:0x10223198
100ca46b:	10 
100ca46c:	f3 0f 58 05 20 1f 1a 	addss  xmm0,DWORD PTR ds:0x101a1f20
100ca473:	10 
100ca474:	0f 2f c8             	comiss xmm1,xmm0
100ca477:	76 0a                	jbe    0x100ca483
100ca479:	8b 03                	mov    eax,DWORD PTR [ebx]
100ca47b:	8b cb                	mov    ecx,ebx
100ca47d:	ff 90 f8 00 00 00    	call   DWORD PTR [eax+0xf8]
