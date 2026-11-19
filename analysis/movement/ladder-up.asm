
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1004f470 <.text+0x4e470>:
1004f470:	55                   	push   ebp
1004f471:	8b ec                	mov    ebp,esp
1004f473:	83 ec 08             	sub    esp,0x8
1004f476:	56                   	push   esi
1004f477:	8b f1                	mov    esi,ecx
1004f479:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1004f47c:	8b 80 9c 01 00 00    	mov    eax,DWORD PTR [eax+0x19c]
1004f482:	85 c0                	test   eax,eax
1004f484:	0f 84 ed 02 00 00    	je     0x1004f777
1004f48a:	8b 40 7c             	mov    eax,DWORD PTR [eax+0x7c]
1004f48d:	85 c0                	test   eax,eax
1004f48f:	0f 84 e2 02 00 00    	je     0x1004f777
1004f495:	53                   	push   ebx
1004f496:	ff 70 04             	push   DWORD PTR [eax+0x4]
1004f499:	e8 42 31 fc ff       	call   0x100125e0
1004f49e:	8b d8                	mov    ebx,eax
1004f4a0:	83 c4 04             	add    esp,0x4
1004f4a3:	85 db                	test   ebx,ebx
1004f4a5:	0f 84 cb 02 00 00    	je     0x1004f776
1004f4ab:	83 bb ac 05 00 00 00 	cmp    DWORD PTR [ebx+0x5ac],0x0
1004f4b2:	0f 84 be 02 00 00    	je     0x1004f776
1004f4b8:	80 be 22 01 00 00 00 	cmp    BYTE PTR [esi+0x122],0x0
1004f4bf:	74 29                	je     0x1004f4ea
1004f4c1:	c6 86 22 01 00 00 00 	mov    BYTE PTR [esi+0x122],0x0
1004f4c8:	c6 05 4c 2e 22 10 01 	mov    BYTE PTR ds:0x10222e4c,0x1
1004f4cf:	8b 83 ac 05 00 00    	mov    eax,DWORD PTR [ebx+0x5ac]
1004f4d5:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1004f4d8:	f3 0f 10 40 10       	movss  xmm0,DWORD PTR [eax+0x10]
1004f4dd:	f3 0f 5c 05 bc fe 1a 	subss  xmm0,DWORD PTR ds:0x101afebc
1004f4e4:	10 
1004f4e5:	f3 0f 11 40 10       	movss  DWORD PTR [eax+0x10],xmm0
1004f4ea:	83 be b0 01 00 00 01 	cmp    DWORD PTR [esi+0x1b0],0x1
1004f4f1:	7e 5f                	jle    0x1004f552
1004f4f3:	80 be e4 00 00 00 00 	cmp    BYTE PTR [esi+0xe4],0x0
1004f4fa:	75 56                	jne    0x1004f552
1004f4fc:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1004f501:	68 78 1c 1b 10       	push   0x101b1c78
1004f506:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1004f50c:	03 86 e8 00 00 00    	add    eax,DWORD PTR [esi+0xe8]
1004f512:	50                   	push   eax
1004f513:	e8 d8 00 0f 00       	call   0x1013f5f0
1004f518:	83 c4 08             	add    esp,0x8
1004f51b:	85 c0                	test   eax,eax
1004f51d:	75 33                	jne    0x1004f552
1004f51f:	38 05 4c 2e 22 10    	cmp    BYTE PTR ds:0x10222e4c,al
1004f525:	74 07                	je     0x1004f52e
1004f527:	a2 4c 2e 22 10       	mov    ds:0x10222e4c,al
1004f52c:	eb 24                	jmp    0x1004f552
1004f52e:	80 be a8 01 00 00 00 	cmp    BYTE PTR [esi+0x1a8],0x0
1004f535:	75 1b                	jne    0x1004f552
1004f537:	8b 83 ac 05 00 00    	mov    eax,DWORD PTR [ebx+0x5ac]
1004f53d:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1004f540:	f3 0f 10 40 10       	movss  xmm0,DWORD PTR [eax+0x10]
1004f545:	f3 0f 58 05 bc fe 1a 	addss  xmm0,DWORD PTR ds:0x101afebc
1004f54c:	10 
1004f54d:	f3 0f 11 40 10       	movss  DWORD PTR [eax+0x10],xmm0
1004f552:	8b 86 b0 01 00 00    	mov    eax,DWORD PTR [esi+0x1b0]
1004f558:	57                   	push   edi
1004f559:	68 88 1c 1b 10       	push   0x101b1c88
1004f55e:	8b bc 86 24 01 00 00 	mov    edi,DWORD PTR [esi+eax*4+0x124]
1004f565:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1004f56a:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1004f570:	03 c7                	add    eax,edi
1004f572:	80 be e4 00 00 00 00 	cmp    BYTE PTR [esi+0xe4],0x0
1004f579:	50                   	push   eax
1004f57a:	0f 84 b9 00 00 00    	je     0x1004f639
1004f580:	e8 6b 00 0f 00       	call   0x1013f5f0
1004f585:	83 c4 08             	add    esp,0x8
1004f588:	85 c0                	test   eax,eax
1004f58a:	74 3e                	je     0x1004f5ca
1004f58c:	8b 86 b0 01 00 00    	mov    eax,DWORD PTR [esi+0x1b0]
1004f592:	68 5c fe 1a 10       	push   0x101afe5c
1004f597:	8b 8c 86 24 01 00 00 	mov    ecx,DWORD PTR [esi+eax*4+0x124]
1004f59e:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1004f5a3:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
1004f5a9:	51                   	push   ecx
1004f5aa:	e8 41 00 0f 00       	call   0x1013f5f0
1004f5af:	83 c4 08             	add    esp,0x8
1004f5b2:	85 c0                	test   eax,eax
1004f5b4:	74 14                	je     0x1004f5ca
1004f5b6:	8b 86 f0 00 00 00    	mov    eax,DWORD PTR [esi+0xf0]
1004f5bc:	85 c0                	test   eax,eax
1004f5be:	74 0a                	je     0x1004f5ca
1004f5c0:	80 be e4 00 00 00 00 	cmp    BYTE PTR [esi+0xe4],0x0
1004f5c7:	0f 44 f8             	cmove  edi,eax
1004f5ca:	8b 86 b0 01 00 00    	mov    eax,DWORD PTR [esi+0x1b0]
1004f5d0:	68 88 1c 1b 10       	push   0x101b1c88
1004f5d5:	8b 8c 86 24 01 00 00 	mov    ecx,DWORD PTR [esi+eax*4+0x124]
1004f5dc:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1004f5e1:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
1004f5e7:	51                   	push   ecx
1004f5e8:	e8 03 00 0f 00       	call   0x1013f5f0
1004f5ed:	83 c4 08             	add    esp,0x8
1004f5f0:	85 c0                	test   eax,eax
1004f5f2:	0f 84 8b 00 00 00    	je     0x1004f683
1004f5f8:	8b 86 b0 01 00 00    	mov    eax,DWORD PTR [esi+0x1b0]
1004f5fe:	68 5c fe 1a 10       	push   0x101afe5c
1004f603:	8b 8c 86 24 01 00 00 	mov    ecx,DWORD PTR [esi+eax*4+0x124]
1004f60a:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1004f60f:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
1004f615:	51                   	push   ecx
1004f616:	e8 d5 ff 0e 00       	call   0x1013f5f0
1004f61b:	83 c4 08             	add    esp,0x8
1004f61e:	85 c0                	test   eax,eax
1004f620:	74 61                	je     0x1004f683
1004f622:	8b 86 f8 00 00 00    	mov    eax,DWORD PTR [esi+0xf8]
1004f628:	85 c0                	test   eax,eax
1004f62a:	74 57                	je     0x1004f683
1004f62c:	80 be e4 00 00 00 01 	cmp    BYTE PTR [esi+0xe4],0x1
1004f633:	75 4e                	jne    0x1004f683
1004f635:	8b f8                	mov    edi,eax
1004f637:	eb 4a                	jmp    0x1004f683
1004f639:	e8 b2 ff 0e 00       	call   0x1013f5f0
1004f63e:	83 c4 08             	add    esp,0x8
1004f641:	85 c0                	test   eax,eax
1004f643:	74 3e                	je     0x1004f683
1004f645:	8b 86 b0 01 00 00    	mov    eax,DWORD PTR [esi+0x1b0]
1004f64b:	68 5c fe 1a 10       	push   0x101afe5c
1004f650:	8b 8c 86 24 01 00 00 	mov    ecx,DWORD PTR [esi+eax*4+0x124]
1004f657:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1004f65c:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
1004f662:	51                   	push   ecx
1004f663:	e8 88 ff 0e 00       	call   0x1013f5f0
1004f668:	83 c4 08             	add    esp,0x8
1004f66b:	85 c0                	test   eax,eax
1004f66d:	74 14                	je     0x1004f683
1004f66f:	8b 86 ec 00 00 00    	mov    eax,DWORD PTR [esi+0xec]
1004f675:	85 c0                	test   eax,eax
1004f677:	74 0a                	je     0x1004f683
1004f679:	80 be e4 00 00 00 00 	cmp    BYTE PTR [esi+0xe4],0x0
1004f680:	0f 44 f8             	cmove  edi,eax
1004f683:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1004f688:	8b 8b ac 05 00 00    	mov    ecx,DWORD PTR [ebx+0x5ac]
1004f68e:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1004f694:	03 c7                	add    eax,edi
1004f696:	50                   	push   eax
1004f697:	e8 24 2a 07 00       	call   0x100c20c0
1004f69c:	8a 86 e4 00 00 00    	mov    al,BYTE PTR [esi+0xe4]
1004f6a2:	89 be e8 00 00 00    	mov    DWORD PTR [esi+0xe8],edi
1004f6a8:	88 45 ff             	mov    BYTE PTR [ebp-0x1],al
1004f6ab:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1004f6b0:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1004f6b6:	03 c7                	add    eax,edi
1004f6b8:	50                   	push   eax
1004f6b9:	8b 83 ac 05 00 00    	mov    eax,DWORD PTR [ebx+0x5ac]
1004f6bf:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1004f6c2:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1004f6c8:	ff 15 70 30 22 10    	call   DWORD PTR ds:0x10223070
1004f6ce:	83 c4 04             	add    esp,0x4
1004f6d1:	50                   	push   eax
1004f6d2:	e8 09 fd fb ff       	call   0x1000f3e0
1004f6d7:	83 c4 08             	add    esp,0x8
1004f6da:	80 be e4 00 00 00 00 	cmp    BYTE PTR [esi+0xe4],0x0
1004f6e1:	d9 5d f8             	fstp   DWORD PTR [ebp-0x8]
1004f6e4:	5f                   	pop    edi
1004f6e5:	74 15                	je     0x1004f6fc
1004f6e7:	c6 86 a8 01 00 00 01 	mov    BYTE PTR [esi+0x1a8],0x1
1004f6ee:	c6 86 e4 00 00 00 00 	mov    BYTE PTR [esi+0xe4],0x0
1004f6f5:	c6 86 21 01 00 00 01 	mov    BYTE PTR [esi+0x121],0x1
1004f6fc:	f3 0f 10 4d f8       	movss  xmm1,DWORD PTR [ebp-0x8]
1004f701:	0f 2e 0d 70 13 1a 10 	ucomiss xmm1,DWORD PTR ds:0x101a1370
1004f708:	9f                   	lahf
1004f709:	f6 c4 44             	test   ah,0x44
1004f70c:	7b 4b                	jnp    0x1004f759
1004f70e:	8b 86 b0 01 00 00    	mov    eax,DWORD PTR [esi+0x1b0]
1004f714:	8a 4d ff             	mov    cl,BYTE PTR [ebp-0x1]
1004f717:	3b 86 ac 01 00 00    	cmp    eax,DWORD PTR [esi+0x1ac]
1004f71d:	75 20                	jne    0x1004f73f
1004f71f:	84 c9                	test   cl,cl
1004f721:	75 1c                	jne    0x1004f73f
1004f723:	c6 86 dd 00 00 00 01 	mov    BYTE PTR [esi+0xdd],0x1
1004f72a:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1004f72f:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
1004f733:	f3 0f 58 c1          	addss  xmm0,xmm1
1004f737:	f3 0f 11 86 e0 00 00 	movss  DWORD PTR [esi+0xe0],xmm0
1004f73e:	00 
1004f73f:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1004f744:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
1004f748:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1004f74b:	f3 0f 58 c1          	addss  xmm0,xmm1
1004f74f:	f3 0f 11 80 b8 01 00 	movss  DWORD PTR [eax+0x1b8],xmm0
1004f756:	00 
1004f757:	eb 13                	jmp    0x1004f76c
1004f759:	68 20 a1 1a 10       	push   0x101aa120
1004f75e:	6a 01                	push   0x1
1004f760:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1004f766:	8a 4d ff             	mov    cl,BYTE PTR [ebp-0x1]
1004f769:	83 c4 08             	add    esp,0x8
1004f76c:	84 c9                	test   cl,cl
1004f76e:	75 06                	jne    0x1004f776
1004f770:	ff 86 b0 01 00 00    	inc    DWORD PTR [esi+0x1b0]
1004f776:	5b                   	pop    ebx
1004f777:	5e                   	pop    esi
1004f778:	8b e5                	mov    esp,ebp
1004f77a:	5d                   	pop    ebp
1004f77b:	c3                   	ret
1004f77c:	cc                   	int3
1004f77d:	cc                   	int3
1004f77e:	cc                   	int3
1004f77f:	cc                   	int3
