
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1000e5f0 <.text+0xd5f0>:
1000e5f0:	55                   	push   ebp
1000e5f1:	8b ec                	mov    ebp,esp
1000e5f3:	83 ec 10             	sub    esp,0x10
1000e5f6:	53                   	push   ebx
1000e5f7:	56                   	push   esi
1000e5f8:	8b f1                	mov    esi,ecx
1000e5fa:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1000e5fd:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1000e603:	ff 15 70 30 22 10    	call   DWORD PTR ds:0x10223070
1000e609:	8b d8                	mov    ebx,eax
1000e60b:	83 c4 04             	add    esp,0x4
1000e60e:	85 db                	test   ebx,ebx
1000e610:	75 18                	jne    0x1000e62a
1000e612:	68 48 2e 1a 10       	push   0x101a2e48
1000e617:	6a 02                	push   0x2
1000e619:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1000e61f:	83 c4 08             	add    esp,0x8
1000e622:	5e                   	pop    esi
1000e623:	5b                   	pop    ebx
1000e624:	8b e5                	mov    esp,ebp
1000e626:	5d                   	pop    ebp
1000e627:	c2 04 00             	ret    0x4
1000e62a:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1000e62d:	f3 0f 10 ae f4 00 00 	movss  xmm5,DWORD PTR [esi+0xf4]
1000e634:	00 
1000e635:	f3 0f 10 a6 ec 00 00 	movss  xmm4,DWORD PTR [esi+0xec]
1000e63c:	00 
1000e63d:	f3 0f 10 98 38 01 00 	movss  xmm3,DWORD PTR [eax+0x138]
1000e644:	00 
1000e645:	f3 0f 10 90 3c 01 00 	movss  xmm2,DWORD PTR [eax+0x13c]
1000e64c:	00 
1000e64d:	f3 0f 5c eb          	subss  xmm5,xmm3
1000e651:	f3 0f 10 88 34 01 00 	movss  xmm1,DWORD PTR [eax+0x134]
1000e658:	00 
1000e659:	f3 0f 58 1d cc 1d 1a 	addss  xmm3,DWORD PTR ds:0x101a1dcc
1000e660:	10 
1000e661:	c7 86 f8 00 00 00 00 	mov    DWORD PTR [esi+0xf8],0x0
1000e668:	00 00 00 
1000e66b:	f3 0f 59 ec          	mulss  xmm5,xmm4
1000e66f:	f3 0f 59 25 cc 1d 1a 	mulss  xmm4,DWORD PTR ds:0x101a1dcc
1000e676:	10 
1000e677:	f3 0f 59 ea          	mulss  xmm5,xmm2
1000e67b:	f3 0f 59 e2          	mulss  xmm4,xmm2
1000e67f:	f3 0f 58 e9          	addss  xmm5,xmm1
1000e683:	f3 0f 11 9e f4 00 00 	movss  DWORD PTR [esi+0xf4],xmm3
1000e68a:	00 
1000e68b:	f3 0f 58 e1          	addss  xmm4,xmm1
1000e68f:	f3 0f 11 6d f8       	movss  DWORD PTR [ebp-0x8],xmm5
1000e694:	0f 2f 25 84 13 1a 10 	comiss xmm4,DWORD PTR ds:0x101a1384
1000e69b:	f3 0f 11 65 fc       	movss  DWORD PTR [ebp-0x4],xmm4
1000e6a0:	73 08                	jae    0x1000e6aa
1000e6a2:	0f 57 c0             	xorps  xmm0,xmm0
1000e6a5:	0f 2f c4             	comiss xmm0,xmm4
1000e6a8:	72 0a                	jb     0x1000e6b4
1000e6aa:	c7 86 f8 00 00 00 01 	mov    DWORD PTR [esi+0xf8],0x1
1000e6b1:	00 00 00 
1000e6b4:	57                   	push   edi
1000e6b5:	6a 00                	push   0x0
1000e6b7:	83 ec 08             	sub    esp,0x8
1000e6ba:	8d 4d f0             	lea    ecx,[ebp-0x10]
1000e6bd:	f3 0f 11 64 24 04    	movss  DWORD PTR [esp+0x4],xmm4
1000e6c3:	f3 0f 11 2c 24       	movss  DWORD PTR [esp],xmm5
1000e6c8:	51                   	push   ecx
1000e6c9:	50                   	push   eax
1000e6ca:	53                   	push   ebx
1000e6cb:	e8 50 09 00 00       	call   0x1000f020
1000e6d0:	8b f8                	mov    edi,eax
1000e6d2:	83 c4 18             	add    esp,0x18
1000e6d5:	85 ff                	test   edi,edi
1000e6d7:	74 44                	je     0x1000e71d
1000e6d9:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]
1000e6e0:	8b 16                	mov    edx,DWORD PTR [esi]
1000e6e2:	8d 45 f0             	lea    eax,[ebp-0x10]
1000e6e5:	50                   	push   eax
1000e6e6:	8b ce                	mov    ecx,esi
1000e6e8:	ff 92 1c 01 00 00    	call   DWORD PTR [edx+0x11c]
1000e6ee:	f3 0f 10 45 fc       	movss  xmm0,DWORD PTR [ebp-0x4]
1000e6f3:	8d 45 f0             	lea    eax,[ebp-0x10]
1000e6f6:	57                   	push   edi
1000e6f7:	83 ec 08             	sub    esp,0x8
1000e6fa:	f3 0f 11 44 24 04    	movss  DWORD PTR [esp+0x4],xmm0
1000e700:	f3 0f 10 45 f8       	movss  xmm0,DWORD PTR [ebp-0x8]
1000e705:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1000e70a:	50                   	push   eax
1000e70b:	ff 76 04             	push   DWORD PTR [esi+0x4]
1000e70e:	53                   	push   ebx
1000e70f:	e8 0c 09 00 00       	call   0x1000f020
1000e714:	8b f8                	mov    edi,eax
1000e716:	83 c4 18             	add    esp,0x18
1000e719:	85 ff                	test   edi,edi
1000e71b:	75 c3                	jne    0x1000e6e0
1000e71d:	5f                   	pop    edi
1000e71e:	5e                   	pop    esi
1000e71f:	5b                   	pop    ebx
1000e720:	8b e5                	mov    esp,ebp
1000e722:	5d                   	pop    ebp
1000e723:	c2 04 00             	ret    0x4
