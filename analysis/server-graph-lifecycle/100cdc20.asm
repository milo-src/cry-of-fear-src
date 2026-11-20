
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100cdc20 <.text+0xccc20>:
100cdc20:	55                   	push   ebp
100cdc21:	8b ec                	mov    ebp,esp
100cdc23:	51                   	push   ecx
100cdc24:	66 8b 45 08          	mov    ax,WORD PTR [ebp+0x8]
100cdc28:	66 89 45 fc          	mov    WORD PTR [ebp-0x4],ax
100cdc2c:	66 8b 45 0c          	mov    ax,WORD PTR [ebp+0xc]
100cdc30:	56                   	push   esi
100cdc31:	66 89 45 fe          	mov    WORD PTR [ebp-0x2],ax
100cdc35:	8b f1                	mov    esi,ecx
100cdc37:	8d 45 08             	lea    eax,[ebp+0x8]
100cdc3a:	57                   	push   edi
100cdc3b:	50                   	push   eax
100cdc3c:	ff 15 a0 30 22 10    	call   DWORD PTR ds:0x102230a0
100cdc42:	6a 04                	push   0x4
100cdc44:	8d 45 fc             	lea    eax,[ebp-0x4]
100cdc47:	50                   	push   eax
100cdc48:	8d 45 08             	lea    eax,[ebp+0x8]
100cdc4b:	50                   	push   eax
100cdc4c:	ff 15 a4 30 22 10    	call   DWORD PTR ds:0x102230a4
100cdc52:	ff 75 08             	push   DWORD PTR [ebp+0x8]
100cdc55:	ff 15 ac 30 22 10    	call   DWORD PTR ds:0x102230ac
100cdc5b:	8b c8                	mov    ecx,eax
100cdc5d:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
100cdc60:	83 e1 0f             	and    ecx,0xf
100cdc63:	c1 e8 04             	shr    eax,0x4
100cdc66:	33 d2                	xor    edx,edx
100cdc68:	83 c4 14             	add    esp,0x14
100cdc6b:	8b bc 8e 7c 20 00 00 	mov    edi,DWORD PTR [esi+ecx*4+0x207c]
100cdc72:	8b 8e c0 20 00 00    	mov    ecx,DWORD PTR [esi+0x20c0]
100cdc78:	f7 f1                	div    ecx
100cdc7a:	8b b6 bc 20 00 00    	mov    esi,DWORD PTR [esi+0x20bc]
100cdc80:	66 83 3c 56 ff       	cmp    WORD PTR [esi+edx*2],0xffff
100cdc85:	74 13                	je     0x100cdc9a
100cdc87:	8d 04 3a             	lea    eax,[edx+edi*1]
100cdc8a:	8b d0                	mov    edx,eax
100cdc8c:	2b d1                	sub    edx,ecx
100cdc8e:	3b c1                	cmp    eax,ecx
100cdc90:	0f 4c d0             	cmovl  edx,eax
100cdc93:	66 83 3c 56 ff       	cmp    WORD PTR [esi+edx*2],0xffff
100cdc98:	75 ed                	jne    0x100cdc87
100cdc9a:	66 8b 45 10          	mov    ax,WORD PTR [ebp+0x10]
100cdc9e:	5f                   	pop    edi
100cdc9f:	66 89 04 56          	mov    WORD PTR [esi+edx*2],ax
100cdca3:	5e                   	pop    esi
100cdca4:	8b e5                	mov    esp,ebp
100cdca6:	5d                   	pop    ebp
100cdca7:	c2 0c 00             	ret    0xc
