
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1008ce10 <.text+0x8be10>:
1008ce10:	55                   	push   ebp
1008ce11:	8b ec                	mov    ebp,esp
1008ce13:	56                   	push   esi
1008ce14:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
1008ce17:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
1008ce1a:	85 f6                	test   esi,esi
1008ce1c:	75 13                	jne    0x1008ce31
1008ce1e:	ff 15 9c 2f 22 10    	call   DWORD PTR ds:0x10222f9c
1008ce24:	85 c0                	test   eax,eax
1008ce26:	74 06                	je     0x1008ce2e
1008ce28:	8d b0 80 00 00 00    	lea    esi,[eax+0x80]
1008ce2e:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
1008ce31:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
1008ce37:	85 c9                	test   ecx,ecx
1008ce39:	74 07                	je     0x1008ce42
1008ce3b:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
1008ce3e:	85 c0                	test   eax,eax
1008ce40:	75 27                	jne    0x1008ce69
1008ce42:	68 b8 01 00 00       	push   0x1b8
1008ce47:	51                   	push   ecx
1008ce48:	ff 15 44 30 22 10    	call   DWORD PTR ds:0x10223044
1008ce4e:	83 c4 08             	add    esp,0x8
1008ce51:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
1008ce54:	85 c0                	test   eax,eax
1008ce56:	74 0c                	je     0x1008ce64
1008ce58:	c7 00 90 f2 1b 10    	mov    DWORD PTR [eax],0x101bf290
1008ce5e:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
1008ce61:	5e                   	pop    esi
1008ce62:	5d                   	pop    ebp
1008ce63:	c3                   	ret
1008ce64:	33 c0                	xor    eax,eax
1008ce66:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
1008ce69:	5e                   	pop    esi
1008ce6a:	5d                   	pop    ebp
1008ce6b:	c3                   	ret
