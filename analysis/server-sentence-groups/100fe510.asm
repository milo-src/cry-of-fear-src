
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100fe510 <.text+0xfd510>:
100fe510:	55                   	push   ebp
100fe511:	8b ec                	mov    ebp,esp
100fe513:	83 ec 44             	sub    esp,0x44
100fe516:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
100fe51b:	33 c5                	xor    eax,ebp
100fe51d:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100fe520:	83 3d c4 c8 22 10 00 	cmp    DWORD PTR ds:0x1022c8c4,0x0
100fe527:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
100fe52a:	57                   	push   edi
100fe52b:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
100fe52e:	74 70                	je     0x100fe5a0
100fe530:	50                   	push   eax
100fe531:	c6 45 bc 00          	mov    BYTE PTR [ebp-0x44],0x0
100fe535:	e8 b6 f9 ff ff       	call   0x100fdef0
100fe53a:	83 c4 04             	add    esp,0x4
100fe53d:	85 c0                	test   eax,eax
100fe53f:	78 5f                	js     0x100fe5a0
100fe541:	56                   	push   esi
100fe542:	ff 75 24             	push   DWORD PTR [ebp+0x24]
100fe545:	8d 4d bc             	lea    ecx,[ebp-0x44]
100fe548:	ff 75 20             	push   DWORD PTR [ebp+0x20]
100fe54b:	51                   	push   ecx
100fe54c:	50                   	push   eax
100fe54d:	e8 5e 1c 00 00       	call   0x101001b0
100fe552:	8b f0                	mov    esi,eax
100fe554:	83 c4 10             	add    esp,0x10
100fe557:	85 f6                	test   esi,esi
100fe559:	78 33                	js     0x100fe58e
100fe55b:	80 7d bc 00          	cmp    BYTE PTR [ebp-0x44],0x0
100fe55f:	74 2d                	je     0x100fe58e
100fe561:	ff 75 1c             	push   DWORD PTR [ebp+0x1c]
100fe564:	f3 0f 10 45 14       	movss  xmm0,DWORD PTR [ebp+0x14]
100fe569:	8d 45 bc             	lea    eax,[ebp-0x44]
100fe56c:	ff 75 18             	push   DWORD PTR [ebp+0x18]
100fe56f:	83 ec 08             	sub    esp,0x8
100fe572:	f3 0f 11 44 24 04    	movss  DWORD PTR [esp+0x4],xmm0
100fe578:	f3 0f 10 45 10       	movss  xmm0,DWORD PTR [ebp+0x10]
100fe57d:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100fe582:	50                   	push   eax
100fe583:	6a 02                	push   0x2
100fe585:	57                   	push   edi
100fe586:	e8 65 e4 ff ff       	call   0x100fc9f0
100fe58b:	83 c4 1c             	add    esp,0x1c
100fe58e:	8b c6                	mov    eax,esi
100fe590:	5e                   	pop    esi
100fe591:	5f                   	pop    edi
100fe592:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100fe595:	33 cd                	xor    ecx,ebp
100fe597:	e8 17 f6 03 00       	call   0x1013dbb3
100fe59c:	8b e5                	mov    esp,ebp
100fe59e:	5d                   	pop    ebp
100fe59f:	c3                   	ret
100fe5a0:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100fe5a3:	83 c8 ff             	or     eax,0xffffffff
100fe5a6:	33 cd                	xor    ecx,ebp
100fe5a8:	5f                   	pop    edi
100fe5a9:	e8 05 f6 03 00       	call   0x1013dbb3
100fe5ae:	8b e5                	mov    esp,ebp
100fe5b0:	5d                   	pop    ebp
100fe5b1:	c3                   	ret
