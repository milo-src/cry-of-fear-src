
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1000d890 <.text+0xc890>:
1000d890:	55                   	push   ebp
1000d891:	8b ec                	mov    ebp,esp
1000d893:	51                   	push   ecx
1000d894:	53                   	push   ebx
1000d895:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
1000d898:	89 4d fc             	mov    DWORD PTR [ebp-0x4],ecx
1000d89b:	85 db                	test   ebx,ebx
1000d89d:	75 19                	jne    0x1000d8b8
1000d89f:	68 c8 2b 1a 10       	push   0x101a2bc8
1000d8a4:	6a 01                	push   0x1
1000d8a6:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1000d8ac:	83 c4 08             	add    esp,0x8
1000d8af:	33 c0                	xor    eax,eax
1000d8b1:	5b                   	pop    ebx
1000d8b2:	8b e5                	mov    esp,ebp
1000d8b4:	5d                   	pop    ebp
1000d8b5:	c2 04 00             	ret    0x4
1000d8b8:	8b 81 dc 00 00 00    	mov    eax,DWORD PTR [ecx+0xdc]
1000d8be:	56                   	push   esi
1000d8bf:	33 f6                	xor    esi,esi
1000d8c1:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
1000d8c4:	57                   	push   edi
1000d8c5:	85 c0                	test   eax,eax
1000d8c7:	7e 4c                	jle    0x1000d915
1000d8c9:	8d b9 e0 00 00 00    	lea    edi,[ecx+0xe0]
1000d8cf:	90                   	nop
1000d8d0:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
1000d8d6:	8b 07                	mov    eax,DWORD PTR [edi]
1000d8d8:	03 81 98 00 00 00    	add    eax,DWORD PTR [ecx+0x98]
1000d8de:	8b cb                	mov    ecx,ebx
1000d8e0:	8a 11                	mov    dl,BYTE PTR [ecx]
1000d8e2:	3a 10                	cmp    dl,BYTE PTR [eax]
1000d8e4:	75 1a                	jne    0x1000d900
1000d8e6:	84 d2                	test   dl,dl
1000d8e8:	74 12                	je     0x1000d8fc
1000d8ea:	8a 51 01             	mov    dl,BYTE PTR [ecx+0x1]
1000d8ed:	3a 50 01             	cmp    dl,BYTE PTR [eax+0x1]
1000d8f0:	75 0e                	jne    0x1000d900
1000d8f2:	83 c1 02             	add    ecx,0x2
1000d8f5:	83 c0 02             	add    eax,0x2
1000d8f8:	84 d2                	test   dl,dl
1000d8fa:	75 e4                	jne    0x1000d8e0
1000d8fc:	33 c0                	xor    eax,eax
1000d8fe:	eb 05                	jmp    0x1000d905
1000d900:	1b c0                	sbb    eax,eax
1000d902:	83 c8 01             	or     eax,0x1
1000d905:	85 c0                	test   eax,eax
1000d907:	74 76                	je     0x1000d97f
1000d909:	46                   	inc    esi
1000d90a:	83 c7 04             	add    edi,0x4
1000d90d:	3b 75 08             	cmp    esi,DWORD PTR [ebp+0x8]
1000d910:	7c be                	jl     0x1000d8d0
1000d912:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
1000d915:	8b 81 60 01 00 00    	mov    eax,DWORD PTR [ecx+0x160]
1000d91b:	85 c0                	test   eax,eax
1000d91d:	74 73                	je     0x1000d992
1000d91f:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
1000d925:	ba 70 2d 22 10       	mov    edx,0x10222d70
1000d92a:	8b 89 98 00 00 00    	mov    ecx,DWORD PTR [ecx+0x98]
1000d930:	03 c8                	add    ecx,eax
1000d932:	8a 01                	mov    al,BYTE PTR [ecx]
1000d934:	8d 49 01             	lea    ecx,[ecx+0x1]
1000d937:	88 02                	mov    BYTE PTR [edx],al
1000d939:	8d 52 01             	lea    edx,[edx+0x1]
1000d93c:	84 c0                	test   al,al
1000d93e:	75 f2                	jne    0x1000d932
1000d940:	8b f3                	mov    esi,ebx
1000d942:	8a 03                	mov    al,BYTE PTR [ebx]
1000d944:	43                   	inc    ebx
1000d945:	84 c0                	test   al,al
1000d947:	75 f9                	jne    0x1000d942
1000d949:	ba 70 2d 22 10       	mov    edx,0x10222d70
1000d94e:	2b de                	sub    ebx,esi
1000d950:	8d 7a ff             	lea    edi,[edx-0x1]
1000d953:	8a 47 01             	mov    al,BYTE PTR [edi+0x1]
1000d956:	47                   	inc    edi
1000d957:	84 c0                	test   al,al
1000d959:	75 f8                	jne    0x1000d953
1000d95b:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1000d960:	8b cb                	mov    ecx,ebx
1000d962:	c1 e9 02             	shr    ecx,0x2
1000d965:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
1000d967:	8b cb                	mov    ecx,ebx
1000d969:	83 e1 03             	and    ecx,0x3
1000d96c:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
1000d96e:	2b 90 98 00 00 00    	sub    edx,DWORD PTR [eax+0x98]
1000d974:	5f                   	pop    edi
1000d975:	5e                   	pop    esi
1000d976:	8b c2                	mov    eax,edx
1000d978:	5b                   	pop    ebx
1000d979:	8b e5                	mov    esp,ebp
1000d97b:	5d                   	pop    ebp
1000d97c:	c2 04 00             	ret    0x4
1000d97f:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
1000d982:	5f                   	pop    edi
1000d983:	8b 84 b0 20 01 00 00 	mov    eax,DWORD PTR [eax+esi*4+0x120]
1000d98a:	5e                   	pop    esi
1000d98b:	5b                   	pop    ebx
1000d98c:	8b e5                	mov    esp,ebp
1000d98e:	5d                   	pop    ebp
1000d98f:	c2 04 00             	ret    0x4
1000d992:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
1000d995:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
1000d99b:	53                   	push   ebx
1000d99c:	8b 80 d0 01 00 00    	mov    eax,DWORD PTR [eax+0x1d0]
1000d9a2:	03 81 98 00 00 00    	add    eax,DWORD PTR [ecx+0x98]
1000d9a8:	50                   	push   eax
1000d9a9:	68 00 2c 1a 10       	push   0x101a2c00
1000d9ae:	6a 01                	push   0x1
1000d9b0:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1000d9b6:	83 c4 10             	add    esp,0x10
1000d9b9:	33 c0                	xor    eax,eax
1000d9bb:	5f                   	pop    edi
1000d9bc:	5e                   	pop    esi
1000d9bd:	5b                   	pop    ebx
1000d9be:	8b e5                	mov    esp,ebp
1000d9c0:	5d                   	pop    ebp
1000d9c1:	c2 04 00             	ret    0x4
