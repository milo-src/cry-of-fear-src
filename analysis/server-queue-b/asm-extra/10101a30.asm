
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10101a30 <.text+0x100a30>:
10101a30:	55                   	push   ebp
10101a31:	8b ec                	mov    ebp,esp
10101a33:	56                   	push   esi
10101a34:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
10101a37:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
10101a3a:	85 f6                	test   esi,esi
10101a3c:	75 13                	jne    0x10101a51
10101a3e:	ff 15 9c 2f 22 10    	call   DWORD PTR ds:0x10222f9c
10101a44:	85 c0                	test   eax,eax
10101a46:	74 06                	je     0x10101a4e
10101a48:	8d b0 80 00 00 00    	lea    esi,[eax+0x80]
10101a4e:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
10101a51:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
10101a57:	85 c9                	test   ecx,ecx
10101a59:	74 07                	je     0x10101a62
10101a5b:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
10101a5e:	85 c0                	test   eax,eax
10101a60:	75 27                	jne    0x10101a89
10101a62:	68 ec 00 00 00       	push   0xec
10101a67:	51                   	push   ecx
10101a68:	ff 15 44 30 22 10    	call   DWORD PTR ds:0x10223044
10101a6e:	83 c4 08             	add    esp,0x8
10101a71:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
10101a74:	85 c0                	test   eax,eax
10101a76:	74 0c                	je     0x10101a84
10101a78:	c7 00 78 34 1a 10    	mov    DWORD PTR [eax],0x101a3478
10101a7e:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
10101a81:	5e                   	pop    esi
10101a82:	5d                   	pop    ebp
10101a83:	c3                   	ret
10101a84:	33 c0                	xor    eax,eax
10101a86:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
10101a89:	5e                   	pop    esi
10101a8a:	5d                   	pop    ebp
10101a8b:	c3                   	ret
