
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10052e30 <.text+0x51e30>:
10052e30:	55                   	push   ebp
10052e31:	8b ec                	mov    ebp,esp
10052e33:	56                   	push   esi
10052e34:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
10052e37:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
10052e3a:	85 f6                	test   esi,esi
10052e3c:	75 13                	jne    0x10052e51
10052e3e:	ff 15 9c 2f 22 10    	call   DWORD PTR ds:0x10222f9c
10052e44:	85 c0                	test   eax,eax
10052e46:	74 06                	je     0x10052e4e
10052e48:	8d b0 80 00 00 00    	lea    esi,[eax+0x80]
10052e4e:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
10052e51:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
10052e57:	85 c9                	test   ecx,ecx
10052e59:	74 07                	je     0x10052e62
10052e5b:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
10052e5e:	85 c0                	test   eax,eax
10052e60:	75 27                	jne    0x10052e89
10052e62:	68 08 02 00 00       	push   0x208
10052e67:	51                   	push   ecx
10052e68:	ff 15 44 30 22 10    	call   DWORD PTR ds:0x10223044
10052e6e:	83 c4 08             	add    esp,0x8
10052e71:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
10052e74:	85 c0                	test   eax,eax
10052e76:	74 0c                	je     0x10052e84
10052e78:	c7 00 c8 26 1b 10    	mov    DWORD PTR [eax],0x101b26c8
10052e7e:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
10052e81:	5e                   	pop    esi
10052e82:	5d                   	pop    ebp
10052e83:	c3                   	ret
10052e84:	33 c0                	xor    eax,eax
10052e86:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
10052e89:	5e                   	pop    esi
10052e8a:	5d                   	pop    ebp
10052e8b:	c3                   	ret
