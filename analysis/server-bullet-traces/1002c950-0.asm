
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1002c950 <.text+0x2b950>:
1002c950:	55                   	push   ebp
1002c951:	8b ec                	mov    ebp,esp
1002c953:	56                   	push   esi
1002c954:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
1002c957:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
1002c95a:	85 f6                	test   esi,esi
1002c95c:	75 13                	jne    0x1002c971
1002c95e:	ff 15 9c 2f 22 10    	call   DWORD PTR ds:0x10222f9c
1002c964:	85 c0                	test   eax,eax
1002c966:	74 06                	je     0x1002c96e
1002c968:	8d b0 80 00 00 00    	lea    esi,[eax+0x80]
1002c96e:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
1002c971:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
1002c977:	85 c9                	test   ecx,ecx
1002c979:	74 07                	je     0x1002c982
1002c97b:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
1002c97e:	85 c0                	test   eax,eax
1002c980:	75 27                	jne    0x1002c9a9
1002c982:	68 a8 03 00 00       	push   0x3a8
1002c987:	51                   	push   ecx
1002c988:	ff 15 44 30 22 10    	call   DWORD PTR ds:0x10223044
1002c98e:	83 c4 08             	add    esp,0x8
1002c991:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
1002c994:	85 c0                	test   eax,eax
1002c996:	74 0c                	je     0x1002c9a4
1002c998:	c7 00 64 cc 1a 10    	mov    DWORD PTR [eax],0x101acc64
1002c99e:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
1002c9a1:	5e                   	pop    esi
1002c9a2:	5d                   	pop    ebp
1002c9a3:	c3                   	ret
1002c9a4:	33 c0                	xor    eax,eax
1002c9a6:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
1002c9a9:	5e                   	pop    esi
1002c9aa:	5d                   	pop    ebp
1002c9ab:	c3                   	ret
