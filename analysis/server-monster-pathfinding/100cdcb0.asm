
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100cdcb0 <.text+0xcccb0>:
100cdcb0:	55                   	push   ebp
100cdcb1:	8b ec                	mov    ebp,esp
100cdcb3:	83 ec 0c             	sub    esp,0xc
100cdcb6:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
100cdcb9:	53                   	push   ebx
100cdcba:	56                   	push   esi
100cdcbb:	66 89 45 f8          	mov    WORD PTR [ebp-0x8],ax
100cdcbf:	8b d9                	mov    ebx,ecx
100cdcc1:	57                   	push   edi
100cdcc2:	8b 7d 0c             	mov    edi,DWORD PTR [ebp+0xc]
100cdcc5:	8d 45 fc             	lea    eax,[ebp-0x4]
100cdcc8:	50                   	push   eax
100cdcc9:	66 89 7d fa          	mov    WORD PTR [ebp-0x6],di
100cdccd:	ff 15 a0 30 22 10    	call   DWORD PTR ds:0x102230a0
100cdcd3:	6a 04                	push   0x4
100cdcd5:	8d 45 f8             	lea    eax,[ebp-0x8]
100cdcd8:	50                   	push   eax
100cdcd9:	8d 45 fc             	lea    eax,[ebp-0x4]
100cdcdc:	50                   	push   eax
100cdcdd:	ff 15 a4 30 22 10    	call   DWORD PTR ds:0x102230a4
100cdce3:	ff 75 fc             	push   DWORD PTR [ebp-0x4]
100cdce6:	ff 15 ac 30 22 10    	call   DWORD PTR ds:0x102230ac
100cdcec:	8b b3 c0 20 00 00    	mov    esi,DWORD PTR [ebx+0x20c0]
100cdcf2:	8b c8                	mov    ecx,eax
100cdcf4:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100cdcf7:	33 d2                	xor    edx,edx
100cdcf9:	c1 e8 04             	shr    eax,0x4
100cdcfc:	83 e1 0f             	and    ecx,0xf
100cdcff:	f7 f6                	div    esi
100cdd01:	8b 8c 8b 7c 20 00 00 	mov    ecx,DWORD PTR [ebx+ecx*4+0x207c]
100cdd08:	83 c4 14             	add    esp,0x14
100cdd0b:	89 4d f4             	mov    DWORD PTR [ebp-0xc],ecx
100cdd0e:	8b 8b bc 20 00 00    	mov    ecx,DWORD PTR [ebx+0x20bc]
100cdd14:	0f b7 04 51          	movzx  eax,WORD PTR [ecx+edx*2]
100cdd18:	66 83 f8 ff          	cmp    ax,0xffff
100cdd1c:	74 30                	je     0x100cdd4e
100cdd1e:	8b 5b 10             	mov    ebx,DWORD PTR [ebx+0x10]
100cdd21:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
100cdd24:	98                   	cwde
100cdd25:	8d 04 40             	lea    eax,[eax+eax*2]
100cdd28:	3b 3c c3             	cmp    edi,DWORD PTR [ebx+eax*8]
100cdd2b:	8b 7d 0c             	mov    edi,DWORD PTR [ebp+0xc]
100cdd2e:	75 06                	jne    0x100cdd36
100cdd30:	3b 7c c3 04          	cmp    edi,DWORD PTR [ebx+eax*8+0x4]
100cdd34:	74 18                	je     0x100cdd4e
100cdd36:	8b 45 f4             	mov    eax,DWORD PTR [ebp-0xc]
100cdd39:	03 c2                	add    eax,edx
100cdd3b:	8b d0                	mov    edx,eax
100cdd3d:	2b d6                	sub    edx,esi
100cdd3f:	3b c6                	cmp    eax,esi
100cdd41:	0f 4c d0             	cmovl  edx,eax
100cdd44:	0f b7 04 51          	movzx  eax,WORD PTR [ecx+edx*2]
100cdd48:	66 83 f8 ff          	cmp    ax,0xffff
100cdd4c:	75 d3                	jne    0x100cdd21
100cdd4e:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
100cdd51:	0f bf 0c 51          	movsx  ecx,WORD PTR [ecx+edx*2]
100cdd55:	5f                   	pop    edi
100cdd56:	5e                   	pop    esi
100cdd57:	89 08                	mov    DWORD PTR [eax],ecx
100cdd59:	5b                   	pop    ebx
100cdd5a:	8b e5                	mov    esp,ebp
100cdd5c:	5d                   	pop    ebp
100cdd5d:	c2 0c 00             	ret    0xc
