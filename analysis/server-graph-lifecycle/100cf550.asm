
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100cf550 <.text+0xce550>:
100cf550:	56                   	push   esi
100cf551:	8b f1                	mov    esi,ecx
100cf553:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100cf556:	c7 80 08 01 00 00 00 	mov    DWORD PTR [eax+0x108],0x0
100cf55d:	00 00 00 
100cf560:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100cf563:	c7 80 0c 01 00 00 00 	mov    DWORD PTR [eax+0x10c],0x0
100cf56a:	00 00 00 
100cf56d:	83 3d b0 38 22 10 00 	cmp    DWORD PTR ds:0x102238b0,0x0
100cf574:	0f 85 23 01 00 00    	jne    0x100cf69d
100cf57a:	8b 0d c8 38 22 10    	mov    ecx,DWORD PTR ds:0x102238c8
100cf580:	85 c9                	test   ecx,ecx
100cf582:	75 19                	jne    0x100cf59d
100cf584:	51                   	push   ecx
100cf585:	e8 c6 b0 ff ff       	call   0x100ca650
100cf58a:	83 c4 04             	add    esp,0x4
100cf58d:	8b c8                	mov    ecx,eax
100cf58f:	ff 76 04             	push   DWORD PTR [esi+0x4]
100cf592:	e8 a9 03 00 00       	call   0x100cf940
100cf597:	8b 0d c8 38 22 10    	mov    ecx,DWORD PTR ds:0x102238c8
100cf59d:	81 f9 00 04 00 00    	cmp    ecx,0x400
100cf5a3:	7c 12                	jl     0x100cf5b7
100cf5a5:	68 00 6e 1d 10       	push   0x101d6e00
100cf5aa:	6a 02                	push   0x2
100cf5ac:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100cf5b2:	83 c4 08             	add    esp,0x8
100cf5b5:	5e                   	pop    esi
100cf5b6:	c3                   	ret
100cf5b7:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100cf5ba:	6b c9 58             	imul   ecx,ecx,0x58
100cf5bd:	f3 0f 7e 40 08       	movq   xmm0,QWORD PTR [eax+0x8]
100cf5c2:	03 0d bc 38 22 10    	add    ecx,DWORD PTR ds:0x102238bc
100cf5c8:	66 0f d6 01          	movq   QWORD PTR [ecx],xmm0
100cf5cc:	8b 40 10             	mov    eax,DWORD PTR [eax+0x10]
100cf5cf:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
100cf5d2:	6b 15 c8 38 22 10 58 	imul   edx,DWORD PTR ds:0x102238c8,0x58
100cf5d9:	8b 0d bc 38 22 10    	mov    ecx,DWORD PTR ds:0x102238bc
100cf5df:	f3 0f 7e 04 0a       	movq   xmm0,QWORD PTR [edx+ecx*1]
100cf5e4:	66 0f d6 44 0a 0c    	movq   QWORD PTR [edx+ecx*1+0xc],xmm0
100cf5ea:	8b 44 0a 08          	mov    eax,DWORD PTR [edx+ecx*1+0x8]
100cf5ee:	89 44 0a 14          	mov    DWORD PTR [edx+ecx*1+0x14],eax
100cf5f2:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100cf5f5:	6b 15 c8 38 22 10 58 	imul   edx,DWORD PTR ds:0x102238c8,0x58
100cf5fc:	8b 48 54             	mov    ecx,DWORD PTR [eax+0x54]
100cf5ff:	a1 bc 38 22 10       	mov    eax,ds:0x102238bc
100cf604:	89 4c 02 54          	mov    DWORD PTR [edx+eax*1+0x54],ecx
100cf608:	6b 15 c8 38 22 10 58 	imul   edx,DWORD PTR ds:0x102238c8,0x58
100cf60f:	a1 bc 38 22 10       	mov    eax,ds:0x102238bc
100cf614:	0f b7 8e dc 00 00 00 	movzx  ecx,WORD PTR [esi+0xdc]
100cf61b:	66 89 4c 02 50       	mov    WORD PTR [edx+eax*1+0x50],cx
100cf620:	6b 15 c8 38 22 10 58 	imul   edx,DWORD PTR ds:0x102238c8,0x58
100cf627:	a1 bc 38 22 10       	mov    eax,ds:0x102238bc
100cf62c:	0f b7 8e de 00 00 00 	movzx  ecx,WORD PTR [esi+0xde]
100cf633:	66 89 4c 02 52       	mov    WORD PTR [edx+eax*1+0x52],cx
100cf638:	ba 14 6e 1d 10       	mov    edx,0x101d6e14
100cf63d:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100cf642:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100cf645:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100cf64b:	03 01                	add    eax,DWORD PTR [ecx]
100cf64d:	0f 1f 00             	nop    DWORD PTR [eax]
100cf650:	8a 08                	mov    cl,BYTE PTR [eax]
100cf652:	3a 0a                	cmp    cl,BYTE PTR [edx]
100cf654:	75 1a                	jne    0x100cf670
100cf656:	84 c9                	test   cl,cl
100cf658:	74 12                	je     0x100cf66c
100cf65a:	8a 48 01             	mov    cl,BYTE PTR [eax+0x1]
100cf65d:	3a 4a 01             	cmp    cl,BYTE PTR [edx+0x1]
100cf660:	75 0e                	jne    0x100cf670
100cf662:	83 c0 02             	add    eax,0x2
100cf665:	83 c2 02             	add    edx,0x2
100cf668:	84 c9                	test   cl,cl
100cf66a:	75 e4                	jne    0x100cf650
100cf66c:	33 c0                	xor    eax,eax
100cf66e:	eb 05                	jmp    0x100cf675
100cf670:	1b c0                	sbb    eax,eax
100cf672:	83 c8 01             	or     eax,0x1
100cf675:	6b 0d c8 38 22 10 58 	imul   ecx,DWORD PTR ds:0x102238c8,0x58
100cf67c:	85 c0                	test   eax,eax
100cf67e:	a1 bc 38 22 10       	mov    eax,ds:0x102238bc
100cf683:	75 0a                	jne    0x100cf68f
100cf685:	c7 44 01 1c 02 00 00 	mov    DWORD PTR [ecx+eax*1+0x1c],0x2
100cf68c:	00 
100cf68d:	eb 08                	jmp    0x100cf697
100cf68f:	c7 44 01 1c 00 00 00 	mov    DWORD PTR [ecx+eax*1+0x1c],0x0
100cf696:	00 
100cf697:	ff 05 c8 38 22 10    	inc    DWORD PTR ds:0x102238c8
100cf69d:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100cf6a0:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100cf6a6:	ff 15 a0 2f 22 10    	call   DWORD PTR ds:0x10222fa0
100cf6ac:	83 c4 04             	add    esp,0x4
100cf6af:	5e                   	pop    esi
100cf6b0:	c3                   	ret
