
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100fe450 <.text+0xfd450>:
100fe450:	55                   	push   ebp
100fe451:	8b ec                	mov    ebp,esp
100fe453:	83 ec 44             	sub    esp,0x44
100fe456:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
100fe45b:	33 c5                	xor    eax,ebp
100fe45d:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100fe460:	83 3d c4 c8 22 10 00 	cmp    DWORD PTR ds:0x1022c8c4,0x0
100fe467:	56                   	push   esi
100fe468:	8b 75 0c             	mov    esi,DWORD PTR [ebp+0xc]
100fe46b:	57                   	push   edi
100fe46c:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
100fe46f:	74 22                	je     0x100fe493
100fe471:	56                   	push   esi
100fe472:	c6 45 bc 00          	mov    BYTE PTR [ebp-0x44],0x0
100fe476:	e8 75 fa ff ff       	call   0x100fdef0
100fe47b:	83 c4 04             	add    esp,0x4
100fe47e:	85 c0                	test   eax,eax
100fe480:	79 24                	jns    0x100fe4a6
100fe482:	56                   	push   esi
100fe483:	68 78 e9 1d 10       	push   0x101de978
100fe488:	6a 01                	push   0x1
100fe48a:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100fe490:	83 c4 0c             	add    esp,0xc
100fe493:	5f                   	pop    edi
100fe494:	83 c8 ff             	or     eax,0xffffffff
100fe497:	5e                   	pop    esi
100fe498:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100fe49b:	33 cd                	xor    ecx,ebp
100fe49d:	e8 11 f7 03 00       	call   0x1013dbb3
100fe4a2:	8b e5                	mov    esp,ebp
100fe4a4:	5d                   	pop    ebp
100fe4a5:	c3                   	ret
100fe4a6:	8d 4d bc             	lea    ecx,[ebp-0x44]
100fe4a9:	51                   	push   ecx
100fe4aa:	50                   	push   eax
100fe4ab:	e8 d0 1b 00 00       	call   0x10100080
100fe4b0:	8b f0                	mov    esi,eax
100fe4b2:	83 c4 08             	add    esp,0x8
100fe4b5:	85 f6                	test   esi,esi
100fe4b7:	78 40                	js     0x100fe4f9
100fe4b9:	80 7d bc 00          	cmp    BYTE PTR [ebp-0x44],0x0
100fe4bd:	74 3a                	je     0x100fe4f9
100fe4bf:	ff 75 1c             	push   DWORD PTR [ebp+0x1c]
100fe4c2:	f3 0f 10 45 14       	movss  xmm0,DWORD PTR [ebp+0x14]
100fe4c7:	8d 45 bc             	lea    eax,[ebp-0x44]
100fe4ca:	ff 75 18             	push   DWORD PTR [ebp+0x18]
100fe4cd:	b9 02 00 00 00       	mov    ecx,0x2
100fe4d2:	83 ec 08             	sub    esp,0x8
100fe4d5:	f3 0f 11 44 24 04    	movss  DWORD PTR [esp+0x4],xmm0
100fe4db:	f3 0f 10 45 10       	movss  xmm0,DWORD PTR [ebp+0x10]
100fe4e0:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100fe4e5:	50                   	push   eax
100fe4e6:	8b 45 20             	mov    eax,DWORD PTR [ebp+0x20]
100fe4e9:	83 f8 ff             	cmp    eax,0xffffffff
100fe4ec:	0f 44 c1             	cmove  eax,ecx
100fe4ef:	50                   	push   eax
100fe4f0:	57                   	push   edi
100fe4f1:	e8 fa e4 ff ff       	call   0x100fc9f0
100fe4f6:	83 c4 1c             	add    esp,0x1c
100fe4f9:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100fe4fc:	8b c6                	mov    eax,esi
100fe4fe:	5f                   	pop    edi
100fe4ff:	33 cd                	xor    ecx,ebp
100fe501:	5e                   	pop    esi
100fe502:	e8 ac f6 03 00       	call   0x1013dbb3
100fe507:	8b e5                	mov    esp,ebp
100fe509:	5d                   	pop    ebp
100fe50a:	c3                   	ret
