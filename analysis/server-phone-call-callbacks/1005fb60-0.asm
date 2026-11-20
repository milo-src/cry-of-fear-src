
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1005fb60 <.text+0x5eb60>:
1005fb60:	55                   	push   ebp
1005fb61:	8b ec                	mov    ebp,esp
1005fb63:	56                   	push   esi
1005fb64:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
1005fb67:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
1005fb6a:	85 f6                	test   esi,esi
1005fb6c:	75 13                	jne    0x1005fb81
1005fb6e:	ff 15 9c 2f 22 10    	call   DWORD PTR ds:0x10222f9c
1005fb74:	85 c0                	test   eax,eax
1005fb76:	74 06                	je     0x1005fb7e
1005fb78:	8d b0 80 00 00 00    	lea    esi,[eax+0x80]
1005fb7e:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
1005fb81:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
1005fb87:	85 c9                	test   ecx,ecx
1005fb89:	74 07                	je     0x1005fb92
1005fb8b:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
1005fb8e:	85 c0                	test   eax,eax
1005fb90:	75 27                	jne    0x1005fbb9
1005fb92:	68 04 02 00 00       	push   0x204
1005fb97:	51                   	push   ecx
1005fb98:	ff 15 44 30 22 10    	call   DWORD PTR ds:0x10223044
1005fb9e:	83 c4 08             	add    esp,0x8
1005fba1:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
1005fba4:	85 c0                	test   eax,eax
1005fba6:	74 0c                	je     0x1005fbb4
1005fba8:	c7 00 20 5a 1b 10    	mov    DWORD PTR [eax],0x101b5a20
1005fbae:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
1005fbb1:	5e                   	pop    esi
1005fbb2:	5d                   	pop    ebp
1005fbb3:	c3                   	ret
1005fbb4:	33 c0                	xor    eax,eax
1005fbb6:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
1005fbb9:	5e                   	pop    esi
1005fbba:	5d                   	pop    ebp
1005fbbb:	c3                   	ret
