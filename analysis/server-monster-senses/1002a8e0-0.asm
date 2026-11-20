
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1002a8e0 <.text+0x298e0>:
1002a8e0:	55                   	push   ebp
1002a8e1:	8b ec                	mov    ebp,esp
1002a8e3:	56                   	push   esi
1002a8e4:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
1002a8e7:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
1002a8ea:	85 f6                	test   esi,esi
1002a8ec:	75 13                	jne    0x1002a901
1002a8ee:	ff 15 9c 2f 22 10    	call   DWORD PTR ds:0x10222f9c
1002a8f4:	85 c0                	test   eax,eax
1002a8f6:	74 06                	je     0x1002a8fe
1002a8f8:	8d b0 80 00 00 00    	lea    esi,[eax+0x80]
1002a8fe:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
1002a901:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
1002a907:	85 c9                	test   ecx,ecx
1002a909:	74 07                	je     0x1002a912
1002a90b:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
1002a90e:	85 c0                	test   eax,eax
1002a910:	75 27                	jne    0x1002a939
1002a912:	68 ec 00 00 00       	push   0xec
1002a917:	51                   	push   ecx
1002a918:	ff 15 44 30 22 10    	call   DWORD PTR ds:0x10223044
1002a91e:	83 c4 08             	add    esp,0x8
1002a921:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
1002a924:	85 c0                	test   eax,eax
1002a926:	74 0c                	je     0x1002a934
1002a928:	c7 00 80 c4 1a 10    	mov    DWORD PTR [eax],0x101ac480
1002a92e:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
1002a931:	5e                   	pop    esi
1002a932:	5d                   	pop    ebp
1002a933:	c3                   	ret
1002a934:	33 c0                	xor    eax,eax
1002a936:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
1002a939:	5e                   	pop    esi
1002a93a:	5d                   	pop    ebp
1002a93b:	c3                   	ret
