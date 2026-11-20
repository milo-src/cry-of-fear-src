
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100b1490 <.text+0xb0490>:
100b1490:	55                   	push   ebp
100b1491:	8b ec                	mov    ebp,esp
100b1493:	83 ec 50             	sub    esp,0x50
100b1496:	56                   	push   esi
100b1497:	8b f1                	mov    esi,ecx
100b1499:	0f 57 db             	xorps  xmm3,xmm3
100b149c:	8d 4d b0             	lea    ecx,[ebp-0x50]
100b149f:	51                   	push   ecx
100b14a0:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100b14a3:	f3 0f 10 50 08       	movss  xmm2,DWORD PTR [eax+0x8]
100b14a8:	f3 0f 10 40 0c       	movss  xmm0,DWORD PTR [eax+0xc]
100b14ad:	f3 0f 58 d3          	addss  xmm2,xmm3
100b14b1:	f3 0f 10 48 10       	movss  xmm1,DWORD PTR [eax+0x10]
100b14b6:	f3 0f 58 c3          	addss  xmm0,xmm3
100b14ba:	f3 0f 58 0d d8 1e 1a 	addss  xmm1,DWORD PTR ds:0x101a1ed8
100b14c1:	10 
100b14c2:	f3 0f 11 55 e8       	movss  DWORD PTR [ebp-0x18],xmm2
100b14c7:	f3 0f 58 d3          	addss  xmm2,xmm3
100b14cb:	f3 0f 11 45 ec       	movss  DWORD PTR [ebp-0x14],xmm0
100b14d0:	f3 0f 58 c3          	addss  xmm0,xmm3
100b14d4:	f3 0f 11 4d f0       	movss  DWORD PTR [ebp-0x10],xmm1
100b14d9:	f3 0f 5c 0d 70 b6 1a 	subss  xmm1,DWORD PTR ds:0x101ab670
100b14e0:	10 
100b14e1:	f3 0f 11 55 f4       	movss  DWORD PTR [ebp-0xc],xmm2
100b14e6:	f3 0f 11 45 f8       	movss  DWORD PTR [ebp-0x8],xmm0
100b14eb:	f3 0f 11 4d fc       	movss  DWORD PTR [ebp-0x4],xmm1
100b14f0:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100b14f6:	8d 45 f4             	lea    eax,[ebp-0xc]
100b14f9:	6a 01                	push   0x1
100b14fb:	50                   	push   eax
100b14fc:	8d 45 e8             	lea    eax,[ebp-0x18]
100b14ff:	50                   	push   eax
100b1500:	e8 fb 92 06 00       	call   0x1011a800
100b1505:	83 c4 14             	add    esp,0x14
100b1508:	8d 45 b0             	lea    eax,[ebp-0x50]
100b150b:	8b ce                	mov    ecx,esi
100b150d:	6a 40                	push   0x40
100b150f:	50                   	push   eax
100b1510:	e8 2b 00 00 00       	call   0x100b1540
100b1515:	5e                   	pop    esi
100b1516:	8b e5                	mov    esp,ebp
100b1518:	5d                   	pop    ebp
100b1519:	c3                   	ret
