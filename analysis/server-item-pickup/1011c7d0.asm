
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1011c7d0 <.text+0x11b7d0>:
1011c7d0:	55                   	push   ebp
1011c7d1:	8b ec                	mov    ebp,esp
1011c7d3:	83 ec 08             	sub    esp,0x8
1011c7d6:	53                   	push   ebx
1011c7d7:	56                   	push   esi
1011c7d8:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
1011c7db:	8b d9                	mov    ebx,ecx
1011c7dd:	89 5d fc             	mov    DWORD PTR [ebp-0x4],ebx
1011c7e0:	85 f6                	test   esi,esi
1011c7e2:	0f 84 f3 04 00 00    	je     0x1011ccdb
1011c7e8:	8b 06                	mov    eax,DWORD PTR [esi]
1011c7ea:	8b ce                	mov    ecx,esi
1011c7ec:	ff 90 d0 00 00 00    	call   DWORD PTR [eax+0xd0]
1011c7f2:	85 c0                	test   eax,eax
1011c7f4:	0f 84 e1 04 00 00    	je     0x1011ccdb
1011c7fa:	57                   	push   edi
1011c7fb:	ff 76 04             	push   DWORD PTR [esi+0x4]
1011c7fe:	e8 dd 5d ef ff       	call   0x100125e0
1011c803:	8b f8                	mov    edi,eax
1011c805:	83 c4 04             	add    esp,0x4
1011c808:	85 ff                	test   edi,edi
1011c80a:	0f 84 f7 00 00 00    	je     0x1011c907
1011c810:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
1011c816:	be 78 cd 1b 10       	mov    esi,0x101bcd78
1011c81b:	8b 53 04             	mov    edx,DWORD PTR [ebx+0x4]
1011c81e:	8b 89 98 00 00 00    	mov    ecx,DWORD PTR [ecx+0x98]
1011c824:	03 0a                	add    ecx,DWORD PTR [edx]
1011c826:	8a 01                	mov    al,BYTE PTR [ecx]
1011c828:	3a 06                	cmp    al,BYTE PTR [esi]
1011c82a:	75 1a                	jne    0x1011c846
1011c82c:	84 c0                	test   al,al
1011c82e:	74 12                	je     0x1011c842
1011c830:	8a 41 01             	mov    al,BYTE PTR [ecx+0x1]
1011c833:	3a 46 01             	cmp    al,BYTE PTR [esi+0x1]
1011c836:	75 0e                	jne    0x1011c846
1011c838:	83 c1 02             	add    ecx,0x2
1011c83b:	83 c6 02             	add    esi,0x2
1011c83e:	84 c0                	test   al,al
1011c840:	75 e4                	jne    0x1011c826
1011c842:	33 c0                	xor    eax,eax
1011c844:	eb 05                	jmp    0x1011c84b
1011c846:	1b c0                	sbb    eax,eax
1011c848:	83 c8 01             	or     eax,0x1
1011c84b:	85 c0                	test   eax,eax
1011c84d:	75 25                	jne    0x1011c874
1011c84f:	8b cf                	mov    ecx,edi
1011c851:	e8 0a 85 fc ff       	call   0x100e4d60
1011c856:	85 c0                	test   eax,eax
1011c858:	75 1a                	jne    0x1011c874
1011c85a:	50                   	push   eax
1011c85b:	6a 05                	push   0x5
1011c85d:	68 dc 65 1e 10       	push   0x101e65dc
1011c862:	57                   	push   edi
1011c863:	e8 a8 cf ff ff       	call   0x10119810
1011c868:	83 c4 10             	add    esp,0x10
1011c86b:	5f                   	pop    edi
1011c86c:	5e                   	pop    esi
1011c86d:	5b                   	pop    ebx
1011c86e:	8b e5                	mov    esp,ebp
1011c870:	5d                   	pop    ebp
1011c871:	c2 04 00             	ret    0x4
1011c874:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1011c879:	ba 84 44 1b 10       	mov    edx,0x101b4484
1011c87e:	8b 4b 04             	mov    ecx,DWORD PTR [ebx+0x4]
1011c881:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1011c887:	03 01                	add    eax,DWORD PTR [ecx]
1011c889:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]
1011c890:	8a 08                	mov    cl,BYTE PTR [eax]
1011c892:	3a 0a                	cmp    cl,BYTE PTR [edx]
1011c894:	75 1a                	jne    0x1011c8b0
1011c896:	84 c9                	test   cl,cl
1011c898:	74 12                	je     0x1011c8ac
1011c89a:	8a 48 01             	mov    cl,BYTE PTR [eax+0x1]
1011c89d:	3a 4a 01             	cmp    cl,BYTE PTR [edx+0x1]
1011c8a0:	75 0e                	jne    0x1011c8b0
1011c8a2:	83 c0 02             	add    eax,0x2
1011c8a5:	83 c2 02             	add    edx,0x2
1011c8a8:	84 c9                	test   cl,cl
1011c8aa:	75 e4                	jne    0x1011c890
1011c8ac:	33 c0                	xor    eax,eax
1011c8ae:	eb 05                	jmp    0x1011c8b5
1011c8b0:	1b c0                	sbb    eax,eax
1011c8b2:	83 c8 01             	or     eax,0x1
1011c8b5:	85 c0                	test   eax,eax
1011c8b7:	75 4e                	jne    0x1011c907
1011c8b9:	8b cf                	mov    ecx,edi
1011c8bb:	e8 70 83 fc ff       	call   0x100e4c30
1011c8c0:	85 c0                	test   eax,eax
1011c8c2:	75 43                	jne    0x1011c907
1011c8c4:	8b 87 c4 00 00 00    	mov    eax,DWORD PTR [edi+0xc4]
1011c8ca:	83 f8 02             	cmp    eax,0x2
1011c8cd:	74 38                	je     0x1011c907
1011c8cf:	83 f8 03             	cmp    eax,0x3
1011c8d2:	74 33                	je     0x1011c907
1011c8d4:	83 f8 04             	cmp    eax,0x4
1011c8d7:	74 2e                	je     0x1011c907
1011c8d9:	8b 0d e4 2e 22 10    	mov    ecx,DWORD PTR ds:0x10222ee4
1011c8df:	85 c9                	test   ecx,ecx
1011c8e1:	74 24                	je     0x1011c907
1011c8e3:	e8 f8 2e f9 ff       	call   0x100af7e0
1011c8e8:	84 c0                	test   al,al
1011c8ea:	75 1b                	jne    0x1011c907
1011c8ec:	6a 00                	push   0x0
1011c8ee:	6a 05                	push   0x5
1011c8f0:	68 fc 65 1e 10       	push   0x101e65fc
1011c8f5:	57                   	push   edi
1011c8f6:	e8 15 cf ff ff       	call   0x10119810
1011c8fb:	83 c4 10             	add    esp,0x10
1011c8fe:	5f                   	pop    edi
1011c8ff:	5e                   	pop    esi
1011c900:	5b                   	pop    ebx
1011c901:	8b e5                	mov    esp,ebp
1011c903:	5d                   	pop    ebp
1011c904:	c2 04 00             	ret    0x4
1011c907:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1011c90c:	ba fc 21 1b 10       	mov    edx,0x101b21fc
1011c911:	8b 4b 04             	mov    ecx,DWORD PTR [ebx+0x4]
1011c914:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1011c91a:	03 01                	add    eax,DWORD PTR [ecx]
1011c91c:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
1011c920:	8a 08                	mov    cl,BYTE PTR [eax]
1011c922:	3a 0a                	cmp    cl,BYTE PTR [edx]
1011c924:	75 1a                	jne    0x1011c940
1011c926:	84 c9                	test   cl,cl
1011c928:	74 12                	je     0x1011c93c
1011c92a:	8a 48 01             	mov    cl,BYTE PTR [eax+0x1]
1011c92d:	3a 4a 01             	cmp    cl,BYTE PTR [edx+0x1]
1011c930:	75 0e                	jne    0x1011c940
1011c932:	83 c0 02             	add    eax,0x2
1011c935:	83 c2 02             	add    edx,0x2
1011c938:	84 c9                	test   cl,cl
1011c93a:	75 e4                	jne    0x1011c920
1011c93c:	33 c0                	xor    eax,eax
1011c93e:	eb 05                	jmp    0x1011c945
1011c940:	1b c0                	sbb    eax,eax
1011c942:	83 c8 01             	or     eax,0x1
1011c945:	85 c0                	test   eax,eax
1011c947:	75 14                	jne    0x1011c95d
1011c949:	68 fc 21 1b 10       	push   0x101b21fc
1011c94e:	8b cf                	mov    ecx,edi
1011c950:	e8 2b 5a fc ff       	call   0x100e2380
1011c955:	85 c0                	test   eax,eax
1011c957:	0f 85 7d 03 00 00    	jne    0x1011ccda
1011c95d:	8b 0d e4 2e 22 10    	mov    ecx,DWORD PTR ds:0x10222ee4
1011c963:	85 c9                	test   ecx,ecx
1011c965:	0f 84 98 00 00 00    	je     0x1011ca03
1011c96b:	8b 01                	mov    eax,DWORD PTR [ecx]
1011c96d:	53                   	push   ebx
1011c96e:	57                   	push   edi
1011c96f:	ff 50 7c             	call   DWORD PTR [eax+0x7c]
1011c972:	85 c0                	test   eax,eax
1011c974:	0f 85 89 00 00 00    	jne    0x1011ca03
1011c97a:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
1011c97d:	ba b8 8a 1a 10       	mov    edx,0x101a8ab8
1011c982:	8b 88 0c 02 00 00    	mov    ecx,DWORD PTR [eax+0x20c]
1011c988:	8d 81 80 00 00 00    	lea    eax,[ecx+0x80]
1011c98e:	f7 d9                	neg    ecx
1011c990:	1b c9                	sbb    ecx,ecx
1011c992:	23 c8                	and    ecx,eax
1011c994:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1011c999:	8b 09                	mov    ecx,DWORD PTR [ecx]
1011c99b:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
1011c9a1:	8a 01                	mov    al,BYTE PTR [ecx]
1011c9a3:	3a 02                	cmp    al,BYTE PTR [edx]
1011c9a5:	75 1a                	jne    0x1011c9c1
1011c9a7:	84 c0                	test   al,al
1011c9a9:	74 12                	je     0x1011c9bd
1011c9ab:	8a 41 01             	mov    al,BYTE PTR [ecx+0x1]
1011c9ae:	3a 42 01             	cmp    al,BYTE PTR [edx+0x1]
1011c9b1:	75 0e                	jne    0x1011c9c1
1011c9b3:	83 c1 02             	add    ecx,0x2
1011c9b6:	83 c2 02             	add    edx,0x2
1011c9b9:	84 c0                	test   al,al
1011c9bb:	75 e4                	jne    0x1011c9a1
1011c9bd:	33 c0                	xor    eax,eax
1011c9bf:	eb 05                	jmp    0x1011c9c6
1011c9c1:	1b c0                	sbb    eax,eax
1011c9c3:	83 c8 01             	or     eax,0x1
1011c9c6:	85 c0                	test   eax,eax
1011c9c8:	75 11                	jne    0x1011c9db
1011c9ca:	50                   	push   eax
1011c9cb:	6a 05                	push   0x5
1011c9cd:	68 18 66 1e 10       	push   0x101e6618
1011c9d2:	57                   	push   edi
1011c9d3:	e8 38 ce ff ff       	call   0x10119810
1011c9d8:	83 c4 10             	add    esp,0x10
1011c9db:	83 3d 7c 64 22 10 00 	cmp    DWORD PTR ds:0x1022647c,0x0
1011c9e2:	75 0d                	jne    0x1011c9f1
1011c9e4:	83 3d 80 64 22 10 00 	cmp    DWORD PTR ds:0x10226480,0x0
1011c9eb:	0f 84 e9 02 00 00    	je     0x1011ccda
1011c9f1:	53                   	push   ebx
1011c9f2:	e8 09 cf ff ff       	call   0x10119900
1011c9f7:	83 c4 04             	add    esp,0x4
1011c9fa:	5f                   	pop    edi
1011c9fb:	5e                   	pop    esi
1011c9fc:	5b                   	pop    ebx
1011c9fd:	8b e5                	mov    esp,ebp
1011c9ff:	5d                   	pop    ebp
1011ca00:	c2 04 00             	ret    0x4
1011ca03:	8b 73 04             	mov    esi,DWORD PTR [ebx+0x4]
1011ca06:	83 be 54 02 00 00 01 	cmp    DWORD PTR [esi+0x254],0x1
1011ca0d:	75 0d                	jne    0x1011ca1c
1011ca0f:	c7 86 54 02 00 00 00 	mov    DWORD PTR [esi+0x254],0x0
1011ca16:	00 00 00 
1011ca19:	8b 73 04             	mov    esi,DWORD PTR [ebx+0x4]
1011ca1c:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1011ca21:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
1011ca27:	8b 90 98 00 00 00    	mov    edx,DWORD PTR [eax+0x98]
1011ca2d:	8d 81 80 00 00 00    	lea    eax,[ecx+0x80]
1011ca33:	89 55 f8             	mov    DWORD PTR [ebp-0x8],edx
1011ca36:	f7 d9                	neg    ecx
1011ca38:	1b c9                	sbb    ecx,ecx
1011ca3a:	23 c8                	and    ecx,eax
1011ca3c:	03 11                	add    edx,DWORD PTR [ecx]
1011ca3e:	b9 b8 8a 1a 10       	mov    ecx,0x101a8ab8
1011ca43:	8b c2                	mov    eax,edx
1011ca45:	8a 18                	mov    bl,BYTE PTR [eax]
1011ca47:	3a 19                	cmp    bl,BYTE PTR [ecx]
1011ca49:	75 1a                	jne    0x1011ca65
1011ca4b:	84 db                	test   bl,bl
1011ca4d:	74 12                	je     0x1011ca61
1011ca4f:	8a 58 01             	mov    bl,BYTE PTR [eax+0x1]
1011ca52:	3a 59 01             	cmp    bl,BYTE PTR [ecx+0x1]
1011ca55:	75 0e                	jne    0x1011ca65
1011ca57:	83 c0 02             	add    eax,0x2
1011ca5a:	83 c1 02             	add    ecx,0x2
1011ca5d:	84 db                	test   bl,bl
1011ca5f:	75 e4                	jne    0x1011ca45
1011ca61:	33 c0                	xor    eax,eax
1011ca63:	eb 05                	jmp    0x1011ca6a
1011ca65:	1b c0                	sbb    eax,eax
1011ca67:	83 c8 01             	or     eax,0x1
1011ca6a:	85 c0                	test   eax,eax
1011ca6c:	75 23                	jne    0x1011ca91
1011ca6e:	83 be 48 02 00 00 01 	cmp    DWORD PTR [esi+0x248],0x1
1011ca75:	75 1a                	jne    0x1011ca91
1011ca77:	50                   	push   eax
1011ca78:	6a 05                	push   0x5
1011ca7a:	68 3c 66 1e 10       	push   0x101e663c
1011ca7f:	57                   	push   edi
1011ca80:	e8 8b cd ff ff       	call   0x10119810
1011ca85:	83 c4 10             	add    esp,0x10
1011ca88:	5f                   	pop    edi
1011ca89:	5e                   	pop    esi
1011ca8a:	5b                   	pop    ebx
1011ca8b:	8b e5                	mov    esp,ebp
1011ca8d:	5d                   	pop    ebp
1011ca8e:	c2 04 00             	ret    0x4
1011ca91:	b8 b8 8a 1a 10       	mov    eax,0x101a8ab8
1011ca96:	8a 0a                	mov    cl,BYTE PTR [edx]
1011ca98:	3a 08                	cmp    cl,BYTE PTR [eax]
1011ca9a:	75 1a                	jne    0x1011cab6
1011ca9c:	84 c9                	test   cl,cl
1011ca9e:	74 12                	je     0x1011cab2
1011caa0:	8a 4a 01             	mov    cl,BYTE PTR [edx+0x1]
1011caa3:	3a 48 01             	cmp    cl,BYTE PTR [eax+0x1]
1011caa6:	75 0e                	jne    0x1011cab6
1011caa8:	83 c2 02             	add    edx,0x2
1011caab:	83 c0 02             	add    eax,0x2
1011caae:	84 c9                	test   cl,cl
1011cab0:	75 e4                	jne    0x1011ca96
1011cab2:	33 c0                	xor    eax,eax
1011cab4:	eb 05                	jmp    0x1011cabb
1011cab6:	1b c0                	sbb    eax,eax
1011cab8:	83 c8 01             	or     eax,0x1
1011cabb:	85 c0                	test   eax,eax
1011cabd:	75 23                	jne    0x1011cae2
1011cabf:	83 be 48 02 00 00 02 	cmp    DWORD PTR [esi+0x248],0x2
1011cac6:	75 1a                	jne    0x1011cae2
1011cac8:	50                   	push   eax
1011cac9:	6a 05                	push   0x5
1011cacb:	68 54 66 1e 10       	push   0x101e6654
1011cad0:	57                   	push   edi
1011cad1:	e8 3a cd ff ff       	call   0x10119810
1011cad6:	83 c4 10             	add    esp,0x10
1011cad9:	5f                   	pop    edi
1011cada:	5e                   	pop    esi
1011cadb:	5b                   	pop    ebx
1011cadc:	8b e5                	mov    esp,ebp
1011cade:	5d                   	pop    ebp
1011cadf:	c2 04 00             	ret    0x4
1011cae2:	8b 5d fc             	mov    ebx,DWORD PTR [ebp-0x4]
1011cae5:	83 bb 10 01 00 00 00 	cmp    DWORD PTR [ebx+0x110],0x0
1011caec:	74 7a                	je     0x1011cb68
1011caee:	83 be b8 00 00 00 00 	cmp    DWORD PTR [esi+0xb8],0x0
1011caf5:	74 71                	je     0x1011cb68
1011caf7:	8b 06                	mov    eax,DWORD PTR [esi]
1011caf9:	85 c0                	test   eax,eax
1011cafb:	74 6b                	je     0x1011cb68
1011cafd:	8b 75 f8             	mov    esi,DWORD PTR [ebp-0x8]
1011cb00:	03 f0                	add    esi,eax
1011cb02:	68 b8 dc 1a 10       	push   0x101adcb8
1011cb07:	56                   	push   esi
1011cb08:	e8 93 e0 ee ff       	call   0x1000aba0
1011cb0d:	83 c4 08             	add    esp,0x8
1011cb10:	85 c0                	test   eax,eax
1011cb12:	75 54                	jne    0x1011cb68
1011cb14:	68 e4 9a 1a 10       	push   0x101a9ae4
1011cb19:	56                   	push   esi
1011cb1a:	e8 81 e0 ee ff       	call   0x1000aba0
1011cb1f:	83 c4 08             	add    esp,0x8
1011cb22:	85 c0                	test   eax,eax
1011cb24:	75 42                	jne    0x1011cb68
1011cb26:	56                   	push   esi
1011cb27:	8b cf                	mov    ecx,edi
1011cb29:	e8 52 58 fc ff       	call   0x100e2380
1011cb2e:	85 c0                	test   eax,eax
1011cb30:	75 36                	jne    0x1011cb68
1011cb32:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
1011cb35:	8b cf                	mov    ecx,edi
1011cb37:	ff 30                	push   DWORD PTR [eax]
1011cb39:	ff b0 b8 00 00 00    	push   DWORD PTR [eax+0xb8]
1011cb3f:	ff b3 10 01 00 00    	push   DWORD PTR [ebx+0x110]
1011cb45:	e8 f6 e1 fb ff       	call   0x100dad40
1011cb4a:	85 c0                	test   eax,eax
1011cb4c:	75 1a                	jne    0x1011cb68
1011cb4e:	50                   	push   eax
1011cb4f:	6a 02                	push   0x2
1011cb51:	68 d0 4a 1c 10       	push   0x101c4ad0
1011cb56:	57                   	push   edi
1011cb57:	e8 b4 cc ff ff       	call   0x10119810
1011cb5c:	83 c4 10             	add    esp,0x10
1011cb5f:	5f                   	pop    edi
1011cb60:	5e                   	pop    esi
1011cb61:	5b                   	pop    ebx
1011cb62:	8b e5                	mov    esp,ebp
1011cb64:	5d                   	pop    ebp
1011cb65:	c2 04 00             	ret    0x4
1011cb68:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
1011cb6b:	53                   	push   ebx
1011cb6c:	8b 01                	mov    eax,DWORD PTR [ecx]
1011cb6e:	ff 90 8c 00 00 00    	call   DWORD PTR [eax+0x8c]
1011cb74:	85 c0                	test   eax,eax
1011cb76:	0f 84 4a 01 00 00    	je     0x1011ccc6
1011cb7c:	8b 03                	mov    eax,DWORD PTR [ebx]
1011cb7e:	8b cb                	mov    ecx,ebx
1011cb80:	57                   	push   edi
1011cb81:	ff 90 64 01 00 00    	call   DWORD PTR [eax+0x164]
1011cb87:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
1011cb8a:	8b 88 0c 02 00 00    	mov    ecx,DWORD PTR [eax+0x20c]
1011cb90:	8d 81 80 00 00 00    	lea    eax,[ecx+0x80]
1011cb96:	f7 d9                	neg    ecx
1011cb98:	1b c9                	sbb    ecx,ecx
1011cb9a:	23 c8                	and    ecx,eax
1011cb9c:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1011cba1:	8b 11                	mov    edx,DWORD PTR [ecx]
1011cba3:	b9 e4 9a 1a 10       	mov    ecx,0x101a9ae4
1011cba8:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1011cbae:	03 d0                	add    edx,eax
1011cbb0:	8b c2                	mov    eax,edx
1011cbb2:	8a 18                	mov    bl,BYTE PTR [eax]
1011cbb4:	3a 19                	cmp    bl,BYTE PTR [ecx]
1011cbb6:	75 1a                	jne    0x1011cbd2
1011cbb8:	84 db                	test   bl,bl
1011cbba:	74 12                	je     0x1011cbce
1011cbbc:	8a 58 01             	mov    bl,BYTE PTR [eax+0x1]
1011cbbf:	3a 59 01             	cmp    bl,BYTE PTR [ecx+0x1]
1011cbc2:	75 0e                	jne    0x1011cbd2
1011cbc4:	83 c0 02             	add    eax,0x2
1011cbc7:	83 c1 02             	add    ecx,0x2
1011cbca:	84 db                	test   bl,bl
1011cbcc:	75 e4                	jne    0x1011cbb2
1011cbce:	33 c0                	xor    eax,eax
1011cbd0:	eb 05                	jmp    0x1011cbd7
1011cbd2:	1b c0                	sbb    eax,eax
1011cbd4:	83 c8 01             	or     eax,0x1
1011cbd7:	85 c0                	test   eax,eax
1011cbd9:	74 76                	je     0x1011cc51
1011cbdb:	b8 b8 dc 1a 10       	mov    eax,0x101adcb8
1011cbe0:	8a 0a                	mov    cl,BYTE PTR [edx]
1011cbe2:	3a 08                	cmp    cl,BYTE PTR [eax]
1011cbe4:	75 1a                	jne    0x1011cc00
1011cbe6:	84 c9                	test   cl,cl
1011cbe8:	74 12                	je     0x1011cbfc
1011cbea:	8a 4a 01             	mov    cl,BYTE PTR [edx+0x1]
1011cbed:	3a 48 01             	cmp    cl,BYTE PTR [eax+0x1]
1011cbf0:	75 0e                	jne    0x1011cc00
1011cbf2:	83 c2 02             	add    edx,0x2
1011cbf5:	83 c0 02             	add    eax,0x2
1011cbf8:	84 c9                	test   cl,cl
1011cbfa:	75 e4                	jne    0x1011cbe0
1011cbfc:	33 c0                	xor    eax,eax
1011cbfe:	eb 05                	jmp    0x1011cc05
1011cc00:	1b c0                	sbb    eax,eax
1011cc02:	83 c8 01             	or     eax,0x1
1011cc05:	8b 5d fc             	mov    ebx,DWORD PTR [ebp-0x4]
1011cc08:	85 c0                	test   eax,eax
1011cc0a:	74 48                	je     0x1011cc54
1011cc0c:	8b b3 68 01 00 00    	mov    esi,DWORD PTR [ebx+0x168]
1011cc12:	8d 8f 48 04 00 00    	lea    ecx,[edi+0x448]
1011cc18:	ba 01 00 00 00       	mov    edx,0x1
1011cc1d:	8b c1                	mov    eax,ecx
1011cc1f:	90                   	nop
1011cc20:	39 30                	cmp    DWORD PTR [eax],esi
1011cc22:	74 30                	je     0x1011cc54
1011cc24:	42                   	inc    edx
1011cc25:	83 c0 04             	add    eax,0x4
1011cc28:	83 fa 20             	cmp    edx,0x20
1011cc2b:	7e f3                	jle    0x1011cc20
1011cc2d:	b8 01 00 00 00       	mov    eax,0x1
1011cc32:	83 39 00             	cmp    DWORD PTR [ecx],0x0
1011cc35:	74 0b                	je     0x1011cc42
1011cc37:	40                   	inc    eax
1011cc38:	83 c1 04             	add    ecx,0x4
1011cc3b:	83 f8 20             	cmp    eax,0x20
1011cc3e:	7e f2                	jle    0x1011cc32
1011cc40:	eb 12                	jmp    0x1011cc54
1011cc42:	89 b4 87 44 04 00 00 	mov    DWORD PTR [edi+eax*4+0x444],esi
1011cc49:	ff 87 54 06 00 00    	inc    DWORD PTR [edi+0x654]
1011cc4f:	eb 03                	jmp    0x1011cc54
1011cc51:	8b 5d fc             	mov    ebx,DWORD PTR [ebp-0x4]
1011cc54:	83 3d 80 64 22 10 00 	cmp    DWORD PTR ds:0x10226480,0x0
1011cc5b:	75 69                	jne    0x1011ccc6
1011cc5d:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1011cc62:	8b 73 04             	mov    esi,DWORD PTR [ebx+0x4]
1011cc65:	68 b8 dc 1a 10       	push   0x101adcb8
1011cc6a:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1011cc70:	03 06                	add    eax,DWORD PTR [esi]
1011cc72:	50                   	push   eax
1011cc73:	e8 28 df ee ff       	call   0x1000aba0
1011cc78:	83 c4 08             	add    esp,0x8
1011cc7b:	85 c0                	test   eax,eax
1011cc7d:	75 47                	jne    0x1011ccc6
1011cc7f:	f3 0f 10 86 b4 01 00 	movss  xmm0,DWORD PTR [esi+0x1b4]
1011cc86:	00 
1011cc87:	0f 2e 05 90 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1390
1011cc8e:	9f                   	lahf
1011cc8f:	f6 c4 44             	test   ah,0x44
1011cc92:	7b 32                	jnp    0x1011ccc6
1011cc94:	85 ff                	test   edi,edi
1011cc96:	74 2e                	je     0x1011ccc6
1011cc98:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1011cc9b:	6a 64                	push   0x64
1011cc9d:	6a 00                	push   0x0
1011cc9f:	83 ec 08             	sub    esp,0x8
1011cca2:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
1011cca9:	3f 
1011ccaa:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
1011ccb1:	68 54 65 1e 10       	push   0x101e6554
1011ccb6:	6a 03                	push   0x3
1011ccb8:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1011ccbe:	e8 2d fd fd ff       	call   0x100fc9f0
1011ccc3:	83 c4 1c             	add    esp,0x1c
1011ccc6:	51                   	push   ecx
1011ccc7:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
1011ccce:	8b cb                	mov    ecx,ebx
1011ccd0:	6a 03                	push   0x3
1011ccd2:	ff 75 08             	push   DWORD PTR [ebp+0x8]
1011ccd5:	e8 56 5c fe ff       	call   0x10102930
1011ccda:	5f                   	pop    edi
1011ccdb:	5e                   	pop    esi
1011ccdc:	5b                   	pop    ebx
1011ccdd:	8b e5                	mov    esp,ebp
1011ccdf:	5d                   	pop    ebp
1011cce0:	c2 04 00             	ret    0x4
