
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1008ff20 <.text+0x8ef20>:
1008ff20:	55                   	push   ebp
1008ff21:	8b ec                	mov    ebp,esp
1008ff23:	56                   	push   esi
1008ff24:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
1008ff27:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
1008ff2a:	85 f6                	test   esi,esi
1008ff2c:	75 13                	jne    0x1008ff41
1008ff2e:	ff 15 9c 2f 22 10    	call   DWORD PTR ds:0x10222f9c
1008ff34:	85 c0                	test   eax,eax
1008ff36:	74 06                	je     0x1008ff3e
1008ff38:	8d b0 80 00 00 00    	lea    esi,[eax+0x80]
1008ff3e:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
1008ff41:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
1008ff47:	85 c9                	test   ecx,ecx
1008ff49:	74 07                	je     0x1008ff52
1008ff4b:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
1008ff4e:	85 c0                	test   eax,eax
1008ff50:	75 27                	jne    0x1008ff79
1008ff52:	68 dc 00 00 00       	push   0xdc
1008ff57:	51                   	push   ecx
1008ff58:	ff 15 44 30 22 10    	call   DWORD PTR ds:0x10223044
1008ff5e:	83 c4 08             	add    esp,0x8
1008ff61:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
1008ff64:	85 c0                	test   eax,eax
1008ff66:	74 0c                	je     0x1008ff74
1008ff68:	c7 00 48 9e 1c 10    	mov    DWORD PTR [eax],0x101c9e48
1008ff6e:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
1008ff71:	5e                   	pop    esi
1008ff72:	5d                   	pop    ebp
1008ff73:	c3                   	ret
1008ff74:	33 c0                	xor    eax,eax
1008ff76:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
1008ff79:	5e                   	pop    esi
1008ff7a:	5d                   	pop    ebp
1008ff7b:	c3                   	ret
