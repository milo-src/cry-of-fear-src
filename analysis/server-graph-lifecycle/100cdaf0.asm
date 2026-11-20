
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100cdaf0 <.text+0xccaf0>:
100cdaf0:	55                   	push   ebp
100cdaf1:	8b ec                	mov    ebp,esp
100cdaf3:	83 ec 14             	sub    esp,0x14
100cdaf6:	53                   	push   ebx
100cdaf7:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
100cdafa:	8b c3                	mov    eax,ebx
100cdafc:	99                   	cdq
100cdafd:	2b c2                	sub    eax,edx
100cdaff:	c7 45 fc 00 00 00 00 	mov    DWORD PTR [ebp-0x4],0x0
100cdb06:	d1 f8                	sar    eax,1
100cdb08:	3b 05 b4 7a 21 10    	cmp    eax,DWORD PTR ds:0x10217ab4
100cdb0e:	56                   	push   esi
100cdb0f:	0f 4f 05 b4 7a 21 10 	cmovg  eax,DWORD PTR ds:0x10217ab4
100cdb16:	8b f1                	mov    esi,ecx
100cdb18:	99                   	cdq
100cdb19:	83 e2 0f             	and    edx,0xf
100cdb1c:	89 75 ec             	mov    DWORD PTR [ebp-0x14],esi
100cdb1f:	03 c2                	add    eax,edx
100cdb21:	c1 f8 04             	sar    eax,0x4
100cdb24:	8d 8e 7c 20 00 00    	lea    ecx,[esi+0x207c]
100cdb2a:	57                   	push   edi
100cdb2b:	89 45 f4             	mov    DWORD PTR [ebp-0xc],eax
100cdb2e:	bf 01 00 00 00       	mov    edi,0x1
100cdb33:	89 4d f0             	mov    DWORD PTR [ebp-0x10],ecx
100cdb36:	33 c0                	xor    eax,eax
100cdb38:	89 4d f8             	mov    DWORD PTR [ebp-0x8],ecx
100cdb3b:	0f 1f 44 00 00       	nop    DWORD PTR [eax+eax*1+0x0]
100cdb40:	8b 35 f8 77 21 10    	mov    esi,DWORD PTR ds:0x102177f8
100cdb46:	33 c9                	xor    ecx,ecx
100cdb48:	85 f6                	test   esi,esi
100cdb4a:	74 35                	je     0x100cdb81
100cdb4c:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
100cdb50:	85 c9                	test   ecx,ecx
100cdb52:	74 0e                	je     0x100cdb62
100cdb54:	8b c3                	mov    eax,ebx
100cdb56:	99                   	cdq
100cdb57:	f7 3c 8d f8 77 21 10 	idiv   DWORD PTR [ecx*4+0x102177f8]
100cdb5e:	85 d2                	test   edx,edx
100cdb60:	74 11                	je     0x100cdb73
100cdb62:	8b 14 8d f8 77 21 10 	mov    edx,DWORD PTR [ecx*4+0x102177f8]
100cdb69:	3b f7                	cmp    esi,edi
100cdb6b:	7f 04                	jg     0x100cdb71
100cdb6d:	3b fa                	cmp    edi,edx
100cdb6f:	7e 72                	jle    0x100cdbe3
100cdb71:	8b f2                	mov    esi,edx
100cdb73:	41                   	inc    ecx
100cdb74:	83 3c 8d f8 77 21 10 	cmp    DWORD PTR [ecx*4+0x102177f8],0x0
100cdb7b:	00 
100cdb7c:	75 d2                	jne    0x100cdb50
100cdb7e:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
100cdb81:	03 7d f4             	add    edi,DWORD PTR [ebp-0xc]
100cdb84:	83 f8 10             	cmp    eax,0x10
100cdb87:	7c b7                	jl     0x100cdb40
100cdb89:	8b 55 f0             	mov    edx,DWORD PTR [ebp-0x10]
100cdb8c:	b9 08 00 00 00       	mov    ecx,0x8
100cdb91:	8b c3                	mov    eax,ebx
100cdb93:	8d 52 08             	lea    edx,[edx+0x8]
100cdb96:	2b 42 f8             	sub    eax,DWORD PTR [edx-0x8]
100cdb99:	89 42 f8             	mov    DWORD PTR [edx-0x8],eax
100cdb9c:	83 e9 01             	sub    ecx,0x1
100cdb9f:	75 f0                	jne    0x100cdb91
100cdba1:	8b 5d ec             	mov    ebx,DWORD PTR [ebp-0x14]
100cdba4:	be 0f 00 00 00       	mov    esi,0xf
100cdba9:	8d bb b8 20 00 00    	lea    edi,[ebx+0x20b8]
100cdbaf:	90                   	nop
100cdbb0:	56                   	push   esi
100cdbb1:	6a 00                	push   0x0
100cdbb3:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
100cdbb9:	8b 94 83 7c 20 00 00 	mov    edx,DWORD PTR [ebx+eax*4+0x207c]
100cdbc0:	8d 7f fc             	lea    edi,[edi-0x4]
100cdbc3:	4e                   	dec    esi
100cdbc4:	83 c4 08             	add    esp,0x8
100cdbc7:	8d 0c 83             	lea    ecx,[ebx+eax*4]
100cdbca:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100cdbcd:	89 81 7c 20 00 00    	mov    DWORD PTR [ecx+0x207c],eax
100cdbd3:	89 57 04             	mov    DWORD PTR [edi+0x4],edx
100cdbd6:	85 f6                	test   esi,esi
100cdbd8:	7f d6                	jg     0x100cdbb0
100cdbda:	5f                   	pop    edi
100cdbdb:	5e                   	pop    esi
100cdbdc:	5b                   	pop    ebx
100cdbdd:	8b e5                	mov    esp,ebp
100cdbdf:	5d                   	pop    ebp
100cdbe0:	c2 04 00             	ret    0x4
100cdbe3:	8b 5d f8             	mov    ebx,DWORD PTR [ebp-0x8]
100cdbe6:	8b cf                	mov    ecx,edi
100cdbe8:	ff 45 fc             	inc    DWORD PTR [ebp-0x4]
100cdbeb:	8b c2                	mov    eax,edx
100cdbed:	83 c3 04             	add    ebx,0x4
100cdbf0:	2b c7                	sub    eax,edi
100cdbf2:	2b ce                	sub    ecx,esi
100cdbf4:	3b c8                	cmp    ecx,eax
100cdbf6:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
100cdbf9:	89 5d f8             	mov    DWORD PTR [ebp-0x8],ebx
100cdbfc:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
100cdbff:	7f 07                	jg     0x100cdc08
100cdc01:	89 30                	mov    DWORD PTR [eax],esi
100cdc03:	e9 76 ff ff ff       	jmp    0x100cdb7e
100cdc08:	89 10                	mov    DWORD PTR [eax],edx
100cdc0a:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
100cdc0d:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100cdc10:	e9 6c ff ff ff       	jmp    0x100cdb81
