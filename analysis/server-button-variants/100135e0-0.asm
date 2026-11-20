
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100135e0 <.text+0x125e0>:
100135e0:	55                   	push   ebp
100135e1:	8b ec                	mov    ebp,esp
100135e3:	53                   	push   ebx
100135e4:	56                   	push   esi
100135e5:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
100135e8:	8b d9                	mov    ebx,ecx
100135ea:	57                   	push   edi
100135eb:	ba f0 56 1a 10       	mov    edx,0x101a56f0
100135f0:	8b 7e 04             	mov    edi,DWORD PTR [esi+0x4]
100135f3:	8b c7                	mov    eax,edi
100135f5:	8a 08                	mov    cl,BYTE PTR [eax]
100135f7:	3a 0a                	cmp    cl,BYTE PTR [edx]
100135f9:	75 1a                	jne    0x10013615
100135fb:	84 c9                	test   cl,cl
100135fd:	74 12                	je     0x10013611
100135ff:	8a 48 01             	mov    cl,BYTE PTR [eax+0x1]
10013602:	3a 4a 01             	cmp    cl,BYTE PTR [edx+0x1]
10013605:	75 0e                	jne    0x10013615
10013607:	83 c0 02             	add    eax,0x2
1001360a:	83 c2 02             	add    edx,0x2
1001360d:	84 c9                	test   cl,cl
1001360f:	75 e4                	jne    0x100135f5
10013611:	33 c0                	xor    eax,eax
10013613:	eb 05                	jmp    0x1001361a
10013615:	1b c0                	sbb    eax,eax
10013617:	83 c8 01             	or     eax,0x1
1001361a:	85 c0                	test   eax,eax
1001361c:	75 20                	jne    0x1001363e
1001361e:	ff 76 08             	push   DWORD PTR [esi+0x8]
10013621:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
10013627:	83 c4 04             	add    esp,0x4
1001362a:	89 83 b0 01 00 00    	mov    DWORD PTR [ebx+0x1b0],eax
10013630:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10013637:	5f                   	pop    edi
10013638:	5e                   	pop    esi
10013639:	5b                   	pop    ebx
1001363a:	5d                   	pop    ebp
1001363b:	c2 04 00             	ret    0x4
1001363e:	b9 00 57 1a 10       	mov    ecx,0x101a5700
10013643:	8b c7                	mov    eax,edi
10013645:	8a 10                	mov    dl,BYTE PTR [eax]
10013647:	3a 11                	cmp    dl,BYTE PTR [ecx]
10013649:	75 1a                	jne    0x10013665
1001364b:	84 d2                	test   dl,dl
1001364d:	74 12                	je     0x10013661
1001364f:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
10013652:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
10013655:	75 0e                	jne    0x10013665
10013657:	83 c0 02             	add    eax,0x2
1001365a:	83 c1 02             	add    ecx,0x2
1001365d:	84 d2                	test   dl,dl
1001365f:	75 e4                	jne    0x10013645
10013661:	33 c0                	xor    eax,eax
10013663:	eb 05                	jmp    0x1001366a
10013665:	1b c0                	sbb    eax,eax
10013667:	83 c8 01             	or     eax,0x1
1001366a:	85 c0                	test   eax,eax
1001366c:	75 24                	jne    0x10013692
1001366e:	ff 76 08             	push   DWORD PTR [esi+0x8]
10013671:	e8 76 bf 15 00       	call   0x1016f5ec
10013676:	83 c4 04             	add    esp,0x4
10013679:	e8 02 aa 12 00       	call   0x1013e080
1001367e:	88 83 d8 01 00 00    	mov    BYTE PTR [ebx+0x1d8],al
10013684:	5f                   	pop    edi
10013685:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
1001368c:	5e                   	pop    esi
1001368d:	5b                   	pop    ebx
1001368e:	5d                   	pop    ebp
1001368f:	c2 04 00             	ret    0x4
10013692:	b9 10 57 1a 10       	mov    ecx,0x101a5710
10013697:	8b c7                	mov    eax,edi
10013699:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]
100136a0:	8a 10                	mov    dl,BYTE PTR [eax]
100136a2:	3a 11                	cmp    dl,BYTE PTR [ecx]
100136a4:	75 1a                	jne    0x100136c0
100136a6:	84 d2                	test   dl,dl
100136a8:	74 12                	je     0x100136bc
100136aa:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
100136ad:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
100136b0:	75 0e                	jne    0x100136c0
100136b2:	83 c0 02             	add    eax,0x2
100136b5:	83 c1 02             	add    ecx,0x2
100136b8:	84 d2                	test   dl,dl
100136ba:	75 e4                	jne    0x100136a0
100136bc:	33 c0                	xor    eax,eax
100136be:	eb 05                	jmp    0x100136c5
100136c0:	1b c0                	sbb    eax,eax
100136c2:	83 c8 01             	or     eax,0x1
100136c5:	85 c0                	test   eax,eax
100136c7:	75 24                	jne    0x100136ed
100136c9:	ff 76 08             	push   DWORD PTR [esi+0x8]
100136cc:	e8 1b bf 15 00       	call   0x1016f5ec
100136d1:	83 c4 04             	add    esp,0x4
100136d4:	e8 a7 a9 12 00       	call   0x1013e080
100136d9:	88 83 d9 01 00 00    	mov    BYTE PTR [ebx+0x1d9],al
100136df:	5f                   	pop    edi
100136e0:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
100136e7:	5e                   	pop    esi
100136e8:	5b                   	pop    ebx
100136e9:	5d                   	pop    ebp
100136ea:	c2 04 00             	ret    0x4
100136ed:	68 20 57 1a 10       	push   0x101a5720
100136f2:	57                   	push   edi
100136f3:	e8 a8 74 ff ff       	call   0x1000aba0
100136f8:	83 c4 08             	add    esp,0x8
100136fb:	85 c0                	test   eax,eax
100136fd:	74 24                	je     0x10013723
100136ff:	ff 76 08             	push   DWORD PTR [esi+0x8]
10013702:	e8 e5 be 15 00       	call   0x1016f5ec
10013707:	83 c4 04             	add    esp,0x4
1001370a:	e8 71 a9 12 00       	call   0x1013e080
1001370f:	88 83 da 01 00 00    	mov    BYTE PTR [ebx+0x1da],al
10013715:	5f                   	pop    edi
10013716:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
1001371d:	5e                   	pop    esi
1001371e:	5b                   	pop    ebx
1001371f:	5d                   	pop    ebp
10013720:	c2 04 00             	ret    0x4
10013723:	68 30 57 1a 10       	push   0x101a5730
10013728:	57                   	push   edi
10013729:	e8 72 74 ff ff       	call   0x1000aba0
1001372e:	83 c4 08             	add    esp,0x8
10013731:	85 c0                	test   eax,eax
10013733:	74 24                	je     0x10013759
10013735:	ff 76 08             	push   DWORD PTR [esi+0x8]
10013738:	e8 af be 15 00       	call   0x1016f5ec
1001373d:	83 c4 04             	add    esp,0x4
10013740:	e8 3b a9 12 00       	call   0x1013e080
10013745:	88 83 db 01 00 00    	mov    BYTE PTR [ebx+0x1db],al
1001374b:	5f                   	pop    edi
1001374c:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10013753:	5e                   	pop    esi
10013754:	5b                   	pop    ebx
10013755:	5d                   	pop    ebp
10013756:	c2 04 00             	ret    0x4
10013759:	68 44 57 1a 10       	push   0x101a5744
1001375e:	57                   	push   edi
1001375f:	e8 3c 74 ff ff       	call   0x1000aba0
10013764:	83 c4 08             	add    esp,0x8
10013767:	85 c0                	test   eax,eax
10013769:	74 20                	je     0x1001378b
1001376b:	ff 76 08             	push   DWORD PTR [esi+0x8]
1001376e:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
10013774:	83 c4 04             	add    esp,0x4
10013777:	89 83 8c 01 00 00    	mov    DWORD PTR [ebx+0x18c],eax
1001377d:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10013784:	5f                   	pop    edi
10013785:	5e                   	pop    esi
10013786:	5b                   	pop    ebx
10013787:	5d                   	pop    ebp
10013788:	c2 04 00             	ret    0x4
1001378b:	68 50 57 1a 10       	push   0x101a5750
10013790:	57                   	push   edi
10013791:	e8 0a 74 ff ff       	call   0x1000aba0
10013796:	83 c4 08             	add    esp,0x8
10013799:	85 c0                	test   eax,eax
1001379b:	74 20                	je     0x100137bd
1001379d:	ff 76 08             	push   DWORD PTR [esi+0x8]
100137a0:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
100137a6:	83 c4 04             	add    esp,0x4
100137a9:	89 83 90 01 00 00    	mov    DWORD PTR [ebx+0x190],eax
100137af:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
100137b6:	5f                   	pop    edi
100137b7:	5e                   	pop    esi
100137b8:	5b                   	pop    ebx
100137b9:	5d                   	pop    ebp
100137ba:	c2 04 00             	ret    0x4
100137bd:	68 5c 57 1a 10       	push   0x101a575c
100137c2:	57                   	push   edi
100137c3:	e8 d8 73 ff ff       	call   0x1000aba0
100137c8:	83 c4 08             	add    esp,0x8
100137cb:	85 c0                	test   eax,eax
100137cd:	74 20                	je     0x100137ef
100137cf:	ff 76 08             	push   DWORD PTR [esi+0x8]
100137d2:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
100137d8:	83 c4 04             	add    esp,0x4
100137db:	89 83 94 01 00 00    	mov    DWORD PTR [ebx+0x194],eax
100137e1:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
100137e8:	5f                   	pop    edi
100137e9:	5e                   	pop    esi
100137ea:	5b                   	pop    ebx
100137eb:	5d                   	pop    ebp
100137ec:	c2 04 00             	ret    0x4
100137ef:	68 68 57 1a 10       	push   0x101a5768
100137f4:	57                   	push   edi
100137f5:	e8 a6 73 ff ff       	call   0x1000aba0
100137fa:	83 c4 08             	add    esp,0x8
100137fd:	85 c0                	test   eax,eax
100137ff:	74 20                	je     0x10013821
10013801:	ff 76 08             	push   DWORD PTR [esi+0x8]
10013804:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
1001380a:	83 c4 04             	add    esp,0x4
1001380d:	89 83 98 01 00 00    	mov    DWORD PTR [ebx+0x198],eax
10013813:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
1001381a:	5f                   	pop    edi
1001381b:	5e                   	pop    esi
1001381c:	5b                   	pop    ebx
1001381d:	5d                   	pop    ebp
1001381e:	c2 04 00             	ret    0x4
10013821:	68 74 57 1a 10       	push   0x101a5774
10013826:	57                   	push   edi
10013827:	e8 74 73 ff ff       	call   0x1000aba0
1001382c:	83 c4 08             	add    esp,0x8
1001382f:	85 c0                	test   eax,eax
10013831:	74 20                	je     0x10013853
10013833:	ff 76 08             	push   DWORD PTR [esi+0x8]
10013836:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
1001383c:	83 c4 04             	add    esp,0x4
1001383f:	89 83 9c 01 00 00    	mov    DWORD PTR [ebx+0x19c],eax
10013845:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
1001384c:	5f                   	pop    edi
1001384d:	5e                   	pop    esi
1001384e:	5b                   	pop    ebx
1001384f:	5d                   	pop    ebp
10013850:	c2 04 00             	ret    0x4
10013853:	68 80 57 1a 10       	push   0x101a5780
10013858:	57                   	push   edi
10013859:	e8 42 73 ff ff       	call   0x1000aba0
1001385e:	83 c4 08             	add    esp,0x8
10013861:	85 c0                	test   eax,eax
10013863:	74 20                	je     0x10013885
10013865:	ff 76 08             	push   DWORD PTR [esi+0x8]
10013868:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
1001386e:	83 c4 04             	add    esp,0x4
10013871:	89 83 a4 01 00 00    	mov    DWORD PTR [ebx+0x1a4],eax
10013877:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
1001387e:	5f                   	pop    edi
1001387f:	5e                   	pop    esi
10013880:	5b                   	pop    ebx
10013881:	5d                   	pop    ebp
10013882:	c2 04 00             	ret    0x4
10013885:	68 08 40 1a 10       	push   0x101a4008
1001388a:	57                   	push   edi
1001388b:	e8 10 73 ff ff       	call   0x1000aba0
10013890:	83 c4 08             	add    esp,0x8
10013893:	85 c0                	test   eax,eax
10013895:	74 1f                	je     0x100138b6
10013897:	ff 76 08             	push   DWORD PTR [esi+0x8]
1001389a:	e8 bf 7c 15 00       	call   0x1016b55e
1001389f:	83 c4 04             	add    esp,0x4
100138a2:	89 83 dc 01 00 00    	mov    DWORD PTR [ebx+0x1dc],eax
100138a8:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
100138af:	5f                   	pop    edi
100138b0:	5e                   	pop    esi
100138b1:	5b                   	pop    ebx
100138b2:	5d                   	pop    ebp
100138b3:	c2 04 00             	ret    0x4
100138b6:	68 90 57 1a 10       	push   0x101a5790
100138bb:	57                   	push   edi
100138bc:	e8 df 72 ff ff       	call   0x1000aba0
100138c1:	83 c4 08             	add    esp,0x8
100138c4:	85 c0                	test   eax,eax
100138c6:	74 1f                	je     0x100138e7
100138c8:	ff 76 08             	push   DWORD PTR [esi+0x8]
100138cb:	e8 8e 7c 15 00       	call   0x1016b55e
100138d0:	83 c4 04             	add    esp,0x4
100138d3:	89 83 e0 01 00 00    	mov    DWORD PTR [ebx+0x1e0],eax
100138d9:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
100138e0:	5f                   	pop    edi
100138e1:	5e                   	pop    esi
100138e2:	5b                   	pop    ebx
100138e3:	5d                   	pop    ebp
100138e4:	c2 04 00             	ret    0x4
100138e7:	56                   	push   esi
100138e8:	8b cb                	mov    ecx,ebx
100138ea:	e8 91 eb 0e 00       	call   0x10102480
100138ef:	5f                   	pop    edi
100138f0:	5e                   	pop    esi
100138f1:	5b                   	pop    ebx
100138f2:	5d                   	pop    ebp
100138f3:	c2 04 00             	ret    0x4
