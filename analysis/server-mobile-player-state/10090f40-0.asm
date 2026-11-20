
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10090f40 <.text+0x8ff40>:
10090f40:	55                   	push   ebp
10090f41:	8b ec                	mov    ebp,esp
10090f43:	56                   	push   esi
10090f44:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
10090f47:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
10090f4a:	85 f6                	test   esi,esi
10090f4c:	75 13                	jne    0x10090f61
10090f4e:	ff 15 9c 2f 22 10    	call   DWORD PTR ds:0x10222f9c
10090f54:	85 c0                	test   eax,eax
10090f56:	74 06                	je     0x10090f5e
10090f58:	8d b0 80 00 00 00    	lea    esi,[eax+0x80]
10090f5e:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
10090f61:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
10090f67:	85 c9                	test   ecx,ecx
10090f69:	74 07                	je     0x10090f72
10090f6b:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
10090f6e:	85 c0                	test   eax,eax
10090f70:	75 27                	jne    0x10090f99
10090f72:	68 dc 00 00 00       	push   0xdc
10090f77:	51                   	push   ecx
10090f78:	ff 15 44 30 22 10    	call   DWORD PTR ds:0x10223044
10090f7e:	83 c4 08             	add    esp,0x8
10090f81:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
10090f84:	85 c0                	test   eax,eax
10090f86:	74 0c                	je     0x10090f94
10090f88:	c7 00 a4 6a 1c 10    	mov    DWORD PTR [eax],0x101c6aa4
10090f8e:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
10090f91:	5e                   	pop    esi
10090f92:	5d                   	pop    ebp
10090f93:	c3                   	ret
10090f94:	33 c0                	xor    eax,eax
10090f96:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
10090f99:	5e                   	pop    esi
10090f9a:	5d                   	pop    ebp
10090f9b:	c3                   	ret
