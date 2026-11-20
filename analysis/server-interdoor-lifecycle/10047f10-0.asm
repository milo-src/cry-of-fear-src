
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10047f10 <.text+0x46f10>:
10047f10:	55                   	push   ebp
10047f11:	8b ec                	mov    ebp,esp
10047f13:	56                   	push   esi
10047f14:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
10047f17:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
10047f1a:	85 f6                	test   esi,esi
10047f1c:	75 13                	jne    0x10047f31
10047f1e:	ff 15 9c 2f 22 10    	call   DWORD PTR ds:0x10222f9c
10047f24:	85 c0                	test   eax,eax
10047f26:	74 06                	je     0x10047f2e
10047f28:	8d b0 80 00 00 00    	lea    esi,[eax+0x80]
10047f2e:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
10047f31:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
10047f37:	85 c9                	test   ecx,ecx
10047f39:	74 07                	je     0x10047f42
10047f3b:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
10047f3e:	85 c0                	test   eax,eax
10047f40:	75 27                	jne    0x10047f69
10047f42:	68 b0 01 00 00       	push   0x1b0
10047f47:	51                   	push   ecx
10047f48:	ff 15 44 30 22 10    	call   DWORD PTR ds:0x10223044
10047f4e:	83 c4 08             	add    esp,0x8
10047f51:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
10047f54:	85 c0                	test   eax,eax
10047f56:	74 0c                	je     0x10047f64
10047f58:	c7 00 b8 0a 1b 10    	mov    DWORD PTR [eax],0x101b0ab8
10047f5e:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
10047f61:	5e                   	pop    esi
10047f62:	5d                   	pop    ebp
10047f63:	c3                   	ret
10047f64:	33 c0                	xor    eax,eax
10047f66:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
10047f69:	5e                   	pop    esi
10047f6a:	5d                   	pop    ebp
10047f6b:	c3                   	ret
