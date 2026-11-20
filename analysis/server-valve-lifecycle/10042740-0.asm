
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10042740 <.text+0x41740>:
10042740:	55                   	push   ebp
10042741:	8b ec                	mov    ebp,esp
10042743:	53                   	push   ebx
10042744:	56                   	push   esi
10042745:	57                   	push   edi
10042746:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
10042749:	8b d9                	mov    ebx,ecx
1004274b:	ba 44 57 1a 10       	mov    edx,0x101a5744
10042750:	8b 77 04             	mov    esi,DWORD PTR [edi+0x4]
10042753:	8b c6                	mov    eax,esi
10042755:	8a 08                	mov    cl,BYTE PTR [eax]
10042757:	3a 0a                	cmp    cl,BYTE PTR [edx]
10042759:	75 1a                	jne    0x10042775
1004275b:	84 c9                	test   cl,cl
1004275d:	74 12                	je     0x10042771
1004275f:	8a 48 01             	mov    cl,BYTE PTR [eax+0x1]
10042762:	3a 4a 01             	cmp    cl,BYTE PTR [edx+0x1]
10042765:	75 0e                	jne    0x10042775
10042767:	83 c0 02             	add    eax,0x2
1004276a:	83 c2 02             	add    edx,0x2
1004276d:	84 c9                	test   cl,cl
1004276f:	75 e4                	jne    0x10042755
10042771:	33 c0                	xor    eax,eax
10042773:	eb 05                	jmp    0x1004277a
10042775:	1b c0                	sbb    eax,eax
10042777:	83 c8 01             	or     eax,0x1
1004277a:	85 c0                	test   eax,eax
1004277c:	75 20                	jne    0x1004279e
1004277e:	ff 77 08             	push   DWORD PTR [edi+0x8]
10042781:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
10042787:	83 c4 04             	add    esp,0x4
1004278a:	89 83 80 01 00 00    	mov    DWORD PTR [ebx+0x180],eax
10042790:	c7 47 0c 01 00 00 00 	mov    DWORD PTR [edi+0xc],0x1
10042797:	5f                   	pop    edi
10042798:	5e                   	pop    esi
10042799:	5b                   	pop    ebx
1004279a:	5d                   	pop    ebp
1004279b:	c2 04 00             	ret    0x4
1004279e:	b9 50 57 1a 10       	mov    ecx,0x101a5750
100427a3:	8b c6                	mov    eax,esi
100427a5:	8a 10                	mov    dl,BYTE PTR [eax]
100427a7:	3a 11                	cmp    dl,BYTE PTR [ecx]
100427a9:	75 1a                	jne    0x100427c5
100427ab:	84 d2                	test   dl,dl
100427ad:	74 12                	je     0x100427c1
100427af:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
100427b2:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
100427b5:	75 0e                	jne    0x100427c5
100427b7:	83 c0 02             	add    eax,0x2
100427ba:	83 c1 02             	add    ecx,0x2
100427bd:	84 d2                	test   dl,dl
100427bf:	75 e4                	jne    0x100427a5
100427c1:	33 c0                	xor    eax,eax
100427c3:	eb 05                	jmp    0x100427ca
100427c5:	1b c0                	sbb    eax,eax
100427c7:	83 c8 01             	or     eax,0x1
100427ca:	85 c0                	test   eax,eax
100427cc:	75 20                	jne    0x100427ee
100427ce:	ff 77 08             	push   DWORD PTR [edi+0x8]
100427d1:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
100427d7:	83 c4 04             	add    esp,0x4
100427da:	89 83 84 01 00 00    	mov    DWORD PTR [ebx+0x184],eax
100427e0:	c7 47 0c 01 00 00 00 	mov    DWORD PTR [edi+0xc],0x1
100427e7:	5f                   	pop    edi
100427e8:	5e                   	pop    esi
100427e9:	5b                   	pop    ebx
100427ea:	5d                   	pop    ebp
100427eb:	c2 04 00             	ret    0x4
100427ee:	b9 5c 57 1a 10       	mov    ecx,0x101a575c
100427f3:	8b c6                	mov    eax,esi
100427f5:	8a 10                	mov    dl,BYTE PTR [eax]
100427f7:	3a 11                	cmp    dl,BYTE PTR [ecx]
100427f9:	75 1a                	jne    0x10042815
100427fb:	84 d2                	test   dl,dl
100427fd:	74 12                	je     0x10042811
100427ff:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
10042802:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
10042805:	75 0e                	jne    0x10042815
10042807:	83 c0 02             	add    eax,0x2
1004280a:	83 c1 02             	add    ecx,0x2
1004280d:	84 d2                	test   dl,dl
1004280f:	75 e4                	jne    0x100427f5
10042811:	33 c0                	xor    eax,eax
10042813:	eb 05                	jmp    0x1004281a
10042815:	1b c0                	sbb    eax,eax
10042817:	83 c8 01             	or     eax,0x1
1004281a:	85 c0                	test   eax,eax
1004281c:	75 23                	jne    0x10042841
1004281e:	ff 77 08             	push   DWORD PTR [edi+0x8]
10042821:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
10042827:	8b 4b 04             	mov    ecx,DWORD PTR [ebx+0x4]
1004282a:	83 c4 04             	add    esp,0x4
1004282d:	89 81 f4 01 00 00    	mov    DWORD PTR [ecx+0x1f4],eax
10042833:	c7 47 0c 01 00 00 00 	mov    DWORD PTR [edi+0xc],0x1
1004283a:	5f                   	pop    edi
1004283b:	5e                   	pop    esi
1004283c:	5b                   	pop    ebx
1004283d:	5d                   	pop    ebp
1004283e:	c2 04 00             	ret    0x4
10042841:	68 68 57 1a 10       	push   0x101a5768
10042846:	56                   	push   esi
10042847:	e8 54 83 fc ff       	call   0x1000aba0
1004284c:	83 c4 08             	add    esp,0x8
1004284f:	85 c0                	test   eax,eax
10042851:	74 23                	je     0x10042876
10042853:	ff 77 08             	push   DWORD PTR [edi+0x8]
10042856:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
1004285c:	8b 4b 04             	mov    ecx,DWORD PTR [ebx+0x4]
1004285f:	83 c4 04             	add    esp,0x4
10042862:	89 81 f8 01 00 00    	mov    DWORD PTR [ecx+0x1f8],eax
10042868:	c7 47 0c 01 00 00 00 	mov    DWORD PTR [edi+0xc],0x1
1004286f:	5f                   	pop    edi
10042870:	5e                   	pop    esi
10042871:	5b                   	pop    ebx
10042872:	5d                   	pop    ebp
10042873:	c2 04 00             	ret    0x4
10042876:	68 74 57 1a 10       	push   0x101a5774
1004287b:	56                   	push   esi
1004287c:	e8 1f 83 fc ff       	call   0x1000aba0
10042881:	83 c4 08             	add    esp,0x8
10042884:	85 c0                	test   eax,eax
10042886:	74 20                	je     0x100428a8
10042888:	ff 77 08             	push   DWORD PTR [edi+0x8]
1004288b:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
10042891:	83 c4 04             	add    esp,0x4
10042894:	89 83 88 01 00 00    	mov    DWORD PTR [ebx+0x188],eax
1004289a:	c7 47 0c 01 00 00 00 	mov    DWORD PTR [edi+0xc],0x1
100428a1:	5f                   	pop    edi
100428a2:	5e                   	pop    esi
100428a3:	5b                   	pop    ebx
100428a4:	5d                   	pop    ebp
100428a5:	c2 04 00             	ret    0x4
100428a8:	b9 7c 24 1a 10       	mov    ecx,0x101a247c
100428ad:	8b c6                	mov    eax,esi
100428af:	90                   	nop
100428b0:	8a 10                	mov    dl,BYTE PTR [eax]
100428b2:	3a 11                	cmp    dl,BYTE PTR [ecx]
100428b4:	75 1a                	jne    0x100428d0
100428b6:	84 d2                	test   dl,dl
100428b8:	74 12                	je     0x100428cc
100428ba:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
100428bd:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
100428c0:	75 0e                	jne    0x100428d0
100428c2:	83 c0 02             	add    eax,0x2
100428c5:	83 c1 02             	add    ecx,0x2
100428c8:	84 d2                	test   dl,dl
100428ca:	75 e4                	jne    0x100428b0
100428cc:	33 c0                	xor    eax,eax
100428ce:	eb 05                	jmp    0x100428d5
100428d0:	1b c0                	sbb    eax,eax
100428d2:	83 c8 01             	or     eax,0x1
100428d5:	85 c0                	test   eax,eax
100428d7:	75 1d                	jne    0x100428f6
100428d9:	ff 77 08             	push   DWORD PTR [edi+0x8]
100428dc:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
100428e2:	83 c4 04             	add    esp,0x4
100428e5:	89 43 18             	mov    DWORD PTR [ebx+0x18],eax
100428e8:	c7 47 0c 01 00 00 00 	mov    DWORD PTR [edi+0xc],0x1
100428ef:	5f                   	pop    edi
100428f0:	5e                   	pop    esi
100428f1:	5b                   	pop    ebx
100428f2:	5d                   	pop    ebp
100428f3:	c2 04 00             	ret    0x4
100428f6:	b9 88 24 1a 10       	mov    ecx,0x101a2488
100428fb:	8b c6                	mov    eax,esi
100428fd:	0f 1f 00             	nop    DWORD PTR [eax]
10042900:	8a 10                	mov    dl,BYTE PTR [eax]
10042902:	3a 11                	cmp    dl,BYTE PTR [ecx]
10042904:	75 1a                	jne    0x10042920
10042906:	84 d2                	test   dl,dl
10042908:	74 12                	je     0x1004291c
1004290a:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1004290d:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
10042910:	75 0e                	jne    0x10042920
10042912:	83 c0 02             	add    eax,0x2
10042915:	83 c1 02             	add    ecx,0x2
10042918:	84 d2                	test   dl,dl
1004291a:	75 e4                	jne    0x10042900
1004291c:	33 c0                	xor    eax,eax
1004291e:	eb 05                	jmp    0x10042925
10042920:	1b c0                	sbb    eax,eax
10042922:	83 c8 01             	or     eax,0x1
10042925:	85 c0                	test   eax,eax
10042927:	75 1c                	jne    0x10042945
10042929:	ff 77 08             	push   DWORD PTR [edi+0x8]
1004292c:	e8 2d 8c 12 00       	call   0x1016b55e
10042931:	83 c4 04             	add    esp,0x4
10042934:	89 43 60             	mov    DWORD PTR [ebx+0x60],eax
10042937:	c7 47 0c 01 00 00 00 	mov    DWORD PTR [edi+0xc],0x1
1004293e:	5f                   	pop    edi
1004293f:	5e                   	pop    esi
10042940:	5b                   	pop    ebx
10042941:	5d                   	pop    ebp
10042942:	c2 04 00             	ret    0x4
10042945:	b8 90 24 1a 10       	mov    eax,0x101a2490
1004294a:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
10042950:	8a 0e                	mov    cl,BYTE PTR [esi]
10042952:	3a 08                	cmp    cl,BYTE PTR [eax]
10042954:	75 1a                	jne    0x10042970
10042956:	84 c9                	test   cl,cl
10042958:	74 12                	je     0x1004296c
1004295a:	8a 4e 01             	mov    cl,BYTE PTR [esi+0x1]
1004295d:	3a 48 01             	cmp    cl,BYTE PTR [eax+0x1]
10042960:	75 0e                	jne    0x10042970
10042962:	83 c6 02             	add    esi,0x2
10042965:	83 c0 02             	add    eax,0x2
10042968:	84 c9                	test   cl,cl
1004296a:	75 e4                	jne    0x10042950
1004296c:	33 c0                	xor    eax,eax
1004296e:	eb 05                	jmp    0x10042975
10042970:	1b c0                	sbb    eax,eax
10042972:	83 c8 01             	or     eax,0x1
10042975:	85 c0                	test   eax,eax
10042977:	75 1c                	jne    0x10042995
10042979:	ff 77 08             	push   DWORD PTR [edi+0x8]
1004297c:	e8 dd 8b 12 00       	call   0x1016b55e
10042981:	83 c4 04             	add    esp,0x4
10042984:	89 43 64             	mov    DWORD PTR [ebx+0x64],eax
10042987:	c7 47 0c 01 00 00 00 	mov    DWORD PTR [edi+0xc],0x1
1004298e:	5f                   	pop    edi
1004298f:	5e                   	pop    esi
10042990:	5b                   	pop    ebx
10042991:	5d                   	pop    ebp
10042992:	c2 04 00             	ret    0x4
10042995:	c7 47 0c 00 00 00 00 	mov    DWORD PTR [edi+0xc],0x0
1004299c:	5f                   	pop    edi
1004299d:	5e                   	pop    esi
1004299e:	5b                   	pop    ebx
1004299f:	5d                   	pop    ebp
100429a0:	c2 04 00             	ret    0x4
