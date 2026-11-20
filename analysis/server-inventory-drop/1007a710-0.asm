
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1007a710 <.text+0x79710>:
1007a710:	55                   	push   ebp
1007a711:	8b ec                	mov    ebp,esp
1007a713:	51                   	push   ecx
1007a714:	56                   	push   esi
1007a715:	8b f1                	mov    esi,ecx
1007a717:	8b 96 60 01 00 00    	mov    edx,DWORD PTR [esi+0x160]
1007a71d:	8b 86 dc 01 00 00    	mov    eax,DWORD PTR [esi+0x1dc]
1007a723:	83 bc 82 40 25 00 00 	cmp    DWORD PTR [edx+eax*4+0x2540],0x1
1007a72a:	01 
1007a72b:	7c 0a                	jl     0x1007a737
1007a72d:	e8 9e 09 00 00       	call   0x1007b0d0
1007a732:	5e                   	pop    esi
1007a733:	8b e5                	mov    esp,ebp
1007a735:	5d                   	pop    ebp
1007a736:	c3                   	ret
1007a737:	8b 0d e4 2e 22 10    	mov    ecx,DWORD PTR ds:0x10222ee4
1007a73d:	85 c9                	test   ecx,ecx
1007a73f:	74 48                	je     0x1007a789
1007a741:	8b 01                	mov    eax,DWORD PTR [ecx]
1007a743:	ff 50 20             	call   DWORD PTR [eax+0x20]
1007a746:	85 c0                	test   eax,eax
1007a748:	74 3f                	je     0x1007a789
1007a74a:	6a 00                	push   0x0
1007a74c:	6a 00                	push   0x0
1007a74e:	ff 35 dc 66 22 10    	push   DWORD PTR ds:0x102266dc
1007a754:	6a 02                	push   0x2
1007a756:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
1007a75c:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
1007a762:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1007a765:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1007a76b:	ff 15 64 30 22 10    	call   DWORD PTR ds:0x10223064
1007a771:	50                   	push   eax
1007a772:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
1007a778:	6a 00                	push   0x0
1007a77a:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
1007a780:	83 c4 1c             	add    esp,0x1c
1007a783:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
1007a789:	8b 8e 60 01 00 00    	mov    ecx,DWORD PTR [esi+0x160]
1007a78f:	57                   	push   edi
1007a790:	8b f9                	mov    edi,ecx
1007a792:	85 c9                	test   ecx,ecx
1007a794:	74 24                	je     0x1007a7ba
1007a796:	8b 81 2c 25 00 00    	mov    eax,DWORD PTR [ecx+0x252c]
1007a79c:	85 c0                	test   eax,eax
1007a79e:	74 22                	je     0x1007a7c2
1007a7a0:	3b c6                	cmp    eax,esi
1007a7a2:	75 1e                	jne    0x1007a7c2
1007a7a4:	83 b9 34 25 00 00 00 	cmp    DWORD PTR [ecx+0x2534],0x0
1007a7ab:	74 15                	je     0x1007a7c2
1007a7ad:	6a 01                	push   0x1
1007a7af:	e8 6c 74 07 00       	call   0x100f1c20
1007a7b4:	8b be 60 01 00 00    	mov    edi,DWORD PTR [esi+0x160]
1007a7ba:	85 ff                	test   edi,edi
1007a7bc:	0f 84 22 02 00 00    	je     0x1007a9e4
1007a7c2:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1007a7c5:	53                   	push   ebx
1007a7c6:	8b 08                	mov    ecx,DWORD PTR [eax]
1007a7c8:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1007a7cd:	89 4d fc             	mov    DWORD PTR [ebp-0x4],ecx
1007a7d0:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1007a7d6:	03 c1                	add    eax,ecx
1007a7d8:	8d 8f 4c 20 00 00    	lea    ecx,[edi+0x204c]
1007a7de:	66 90                	xchg   ax,ax
1007a7e0:	8a 11                	mov    dl,BYTE PTR [ecx]
1007a7e2:	3a 10                	cmp    dl,BYTE PTR [eax]
1007a7e4:	75 1a                	jne    0x1007a800
1007a7e6:	84 d2                	test   dl,dl
1007a7e8:	74 12                	je     0x1007a7fc
1007a7ea:	8a 51 01             	mov    dl,BYTE PTR [ecx+0x1]
1007a7ed:	3a 50 01             	cmp    dl,BYTE PTR [eax+0x1]
1007a7f0:	75 0e                	jne    0x1007a800
1007a7f2:	83 c1 02             	add    ecx,0x2
1007a7f5:	83 c0 02             	add    eax,0x2
1007a7f8:	84 d2                	test   dl,dl
1007a7fa:	75 e4                	jne    0x1007a7e0
1007a7fc:	33 c0                	xor    eax,eax
1007a7fe:	eb 05                	jmp    0x1007a805
1007a800:	1b c0                	sbb    eax,eax
1007a802:	83 c8 01             	or     eax,0x1
1007a805:	85 c0                	test   eax,eax
1007a807:	75 5c                	jne    0x1007a865
1007a809:	88 87 4c 20 00 00    	mov    BYTE PTR [edi+0x204c],al
1007a80f:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
1007a815:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1007a818:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1007a81e:	6a 00                	push   0x0
1007a820:	ff 35 34 66 22 10    	push   DWORD PTR ds:0x10226634
1007a826:	6a 01                	push   0x1
1007a828:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
1007a82e:	6a 01                	push   0x1
1007a830:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
1007a836:	6a 00                	push   0x0
1007a838:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
1007a83e:	83 c4 18             	add    esp,0x18
1007a841:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
1007a847:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
1007a84d:	c7 80 dc 03 00 00 00 	mov    DWORD PTR [eax+0x3dc],0x0
1007a854:	00 00 00 
1007a857:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1007a85a:	8b be 60 01 00 00    	mov    edi,DWORD PTR [esi+0x160]
1007a860:	8b 00                	mov    eax,DWORD PTR [eax]
1007a862:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
1007a865:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1007a86a:	8d 8f cc 20 00 00    	lea    ecx,[edi+0x20cc]
1007a870:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1007a876:	03 45 fc             	add    eax,DWORD PTR [ebp-0x4]
1007a879:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]
1007a880:	8a 11                	mov    dl,BYTE PTR [ecx]
1007a882:	3a 10                	cmp    dl,BYTE PTR [eax]
1007a884:	75 1a                	jne    0x1007a8a0
1007a886:	84 d2                	test   dl,dl
1007a888:	74 12                	je     0x1007a89c
1007a88a:	8a 51 01             	mov    dl,BYTE PTR [ecx+0x1]
1007a88d:	3a 50 01             	cmp    dl,BYTE PTR [eax+0x1]
1007a890:	75 0e                	jne    0x1007a8a0
1007a892:	83 c1 02             	add    ecx,0x2
1007a895:	83 c0 02             	add    eax,0x2
1007a898:	84 d2                	test   dl,dl
1007a89a:	75 e4                	jne    0x1007a880
1007a89c:	33 c0                	xor    eax,eax
1007a89e:	eb 05                	jmp    0x1007a8a5
1007a8a0:	1b c0                	sbb    eax,eax
1007a8a2:	83 c8 01             	or     eax,0x1
1007a8a5:	85 c0                	test   eax,eax
1007a8a7:	75 5c                	jne    0x1007a905
1007a8a9:	88 87 cc 20 00 00    	mov    BYTE PTR [edi+0x20cc],al
1007a8af:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
1007a8b5:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1007a8b8:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1007a8be:	6a 00                	push   0x0
1007a8c0:	ff 35 34 66 22 10    	push   DWORD PTR ds:0x10226634
1007a8c6:	6a 01                	push   0x1
1007a8c8:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
1007a8ce:	6a 02                	push   0x2
1007a8d0:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
1007a8d6:	6a 00                	push   0x0
1007a8d8:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
1007a8de:	83 c4 18             	add    esp,0x18
1007a8e1:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
1007a8e7:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
1007a8ed:	c7 80 e0 03 00 00 00 	mov    DWORD PTR [eax+0x3e0],0x0
1007a8f4:	00 00 00 
1007a8f7:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1007a8fa:	8b be 60 01 00 00    	mov    edi,DWORD PTR [esi+0x160]
1007a900:	8b 00                	mov    eax,DWORD PTR [eax]
1007a902:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
1007a905:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1007a90a:	8d 8f 4c 21 00 00    	lea    ecx,[edi+0x214c]
1007a910:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1007a916:	03 45 fc             	add    eax,DWORD PTR [ebp-0x4]
1007a919:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]
1007a920:	8a 11                	mov    dl,BYTE PTR [ecx]
1007a922:	3a 10                	cmp    dl,BYTE PTR [eax]
1007a924:	75 1a                	jne    0x1007a940
1007a926:	84 d2                	test   dl,dl
1007a928:	74 12                	je     0x1007a93c
1007a92a:	8a 51 01             	mov    dl,BYTE PTR [ecx+0x1]
1007a92d:	3a 50 01             	cmp    dl,BYTE PTR [eax+0x1]
1007a930:	75 0e                	jne    0x1007a940
1007a932:	83 c1 02             	add    ecx,0x2
1007a935:	83 c0 02             	add    eax,0x2
1007a938:	84 d2                	test   dl,dl
1007a93a:	75 e4                	jne    0x1007a920
1007a93c:	33 c0                	xor    eax,eax
1007a93e:	eb 05                	jmp    0x1007a945
1007a940:	1b c0                	sbb    eax,eax
1007a942:	83 c8 01             	or     eax,0x1
1007a945:	85 c0                	test   eax,eax
1007a947:	75 54                	jne    0x1007a99d
1007a949:	88 87 4c 21 00 00    	mov    BYTE PTR [edi+0x214c],al
1007a94f:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
1007a955:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1007a958:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1007a95e:	6a 00                	push   0x0
1007a960:	ff 35 34 66 22 10    	push   DWORD PTR ds:0x10226634
1007a966:	6a 01                	push   0x1
1007a968:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
1007a96e:	6a 03                	push   0x3
1007a970:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
1007a976:	6a 00                	push   0x0
1007a978:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
1007a97e:	83 c4 18             	add    esp,0x18
1007a981:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
1007a987:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
1007a98d:	c7 80 e4 03 00 00 00 	mov    DWORD PTR [eax+0x3e4],0x0
1007a994:	00 00 00 
1007a997:	8b be 60 01 00 00    	mov    edi,DWORD PTR [esi+0x160]
1007a99d:	8b 57 04             	mov    edx,DWORD PTR [edi+0x4]
1007a9a0:	8b 86 68 01 00 00    	mov    eax,DWORD PTR [esi+0x168]
1007a9a6:	6a 01                	push   0x1
1007a9a8:	8b 8a 6c 01 00 00    	mov    ecx,DWORD PTR [edx+0x16c]
1007a9ae:	0f b3 c1             	btr    ecx,eax
1007a9b1:	89 8a 6c 01 00 00    	mov    DWORD PTR [edx+0x16c],ecx
1007a9b7:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1007a9bc:	8b 8e 60 01 00 00    	mov    ecx,DWORD PTR [esi+0x160]
1007a9c2:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1007a9c8:	03 86 10 01 00 00    	add    eax,DWORD PTR [esi+0x110]
1007a9ce:	50                   	push   eax
1007a9cf:	e8 6c 78 06 00       	call   0x100e2240
1007a9d4:	8b 8e 60 01 00 00    	mov    ecx,DWORD PTR [esi+0x160]
1007a9da:	56                   	push   esi
1007a9db:	8b 01                	mov    eax,DWORD PTR [ecx]
1007a9dd:	ff 90 90 00 00 00    	call   DWORD PTR [eax+0x90]
1007a9e3:	5b                   	pop    ebx
1007a9e4:	8b 06                	mov    eax,DWORD PTR [esi]
1007a9e6:	8b ce                	mov    ecx,esi
1007a9e8:	ff 90 60 01 00 00    	call   DWORD PTR [eax+0x160]
1007a9ee:	5f                   	pop    edi
1007a9ef:	5e                   	pop    esi
1007a9f0:	8b e5                	mov    esp,ebp
1007a9f2:	5d                   	pop    ebp
1007a9f3:	c3                   	ret
