
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10101a90 <.text+0x100a90>:
10101a90:	55                   	push   ebp
10101a91:	8b ec                	mov    ebp,esp
10101a93:	56                   	push   esi
10101a94:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
10101a97:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
10101a9a:	85 f6                	test   esi,esi
10101a9c:	75 13                	jne    0x10101ab1
10101a9e:	ff 15 9c 2f 22 10    	call   DWORD PTR ds:0x10222f9c
10101aa4:	85 c0                	test   eax,eax
10101aa6:	74 06                	je     0x10101aae
10101aa8:	8d b0 80 00 00 00    	lea    esi,[eax+0x80]
10101aae:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
10101ab1:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
10101ab7:	85 c9                	test   ecx,ecx
10101ab9:	74 07                	je     0x10101ac2
10101abb:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
10101abe:	85 c0                	test   eax,eax
10101ac0:	75 27                	jne    0x10101ae9
10101ac2:	68 dc 00 00 00       	push   0xdc
10101ac7:	51                   	push   ecx
10101ac8:	ff 15 44 30 22 10    	call   DWORD PTR ds:0x10223044
10101ace:	83 c4 08             	add    esp,0x8
10101ad1:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
10101ad4:	85 c0                	test   eax,eax
10101ad6:	74 0c                	je     0x10101ae4
10101ad8:	c7 00 f0 f4 1d 10    	mov    DWORD PTR [eax],0x101df4f0
10101ade:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
10101ae1:	5e                   	pop    esi
10101ae2:	5d                   	pop    ebp
10101ae3:	c3                   	ret
10101ae4:	33 c0                	xor    eax,eax
10101ae6:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
10101ae9:	5e                   	pop    esi
10101aea:	5d                   	pop    ebp
10101aeb:	c3                   	ret
