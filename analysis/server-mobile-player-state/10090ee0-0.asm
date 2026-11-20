
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10090ee0 <.text+0x8fee0>:
10090ee0:	55                   	push   ebp
10090ee1:	8b ec                	mov    ebp,esp
10090ee3:	56                   	push   esi
10090ee4:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
10090ee7:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
10090eea:	85 f6                	test   esi,esi
10090eec:	75 13                	jne    0x10090f01
10090eee:	ff 15 9c 2f 22 10    	call   DWORD PTR ds:0x10222f9c
10090ef4:	85 c0                	test   eax,eax
10090ef6:	74 06                	je     0x10090efe
10090ef8:	8d b0 80 00 00 00    	lea    esi,[eax+0x80]
10090efe:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
10090f01:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
10090f07:	85 c9                	test   ecx,ecx
10090f09:	74 07                	je     0x10090f12
10090f0b:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
10090f0e:	85 c0                	test   eax,eax
10090f10:	75 27                	jne    0x10090f39
10090f12:	68 68 03 00 00       	push   0x368
10090f17:	51                   	push   ecx
10090f18:	ff 15 44 30 22 10    	call   DWORD PTR ds:0x10223044
10090f1e:	83 c4 08             	add    esp,0x8
10090f21:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
10090f24:	85 c0                	test   eax,eax
10090f26:	74 0c                	je     0x10090f34
10090f28:	c7 00 98 36 1c 10    	mov    DWORD PTR [eax],0x101c3698
10090f2e:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
10090f31:	5e                   	pop    esi
10090f32:	5d                   	pop    ebp
10090f33:	c3                   	ret
10090f34:	33 c0                	xor    eax,eax
10090f36:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
10090f39:	5e                   	pop    esi
10090f3a:	5d                   	pop    ebp
10090f3b:	c3                   	ret
