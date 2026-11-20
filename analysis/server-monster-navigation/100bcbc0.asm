
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100bcbc0 <.text+0xbbbc0>:
100bcbc0:	55                   	push   ebp
100bcbc1:	8b ec                	mov    ebp,esp
100bcbc3:	83 ec 10             	sub    esp,0x10
100bcbc6:	53                   	push   ebx
100bcbc7:	56                   	push   esi
100bcbc8:	57                   	push   edi
100bcbc9:	8b f1                	mov    esi,ecx
100bcbcb:	e8 e0 4e 00 00       	call   0x100c1ab0
100bcbd0:	8b 5d 0c             	mov    ebx,DWORD PTR [ebp+0xc]
100bcbd3:	8b ce                	mov    ecx,esi
100bcbd5:	53                   	push   ebx
100bcbd6:	e8 45 4e 00 00       	call   0x100c1a20
100bcbdb:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
100bcbde:	81 cb 80 00 00 00    	or     ebx,0x80
100bcbe4:	89 86 b8 02 00 00    	mov    DWORD PTR [esi+0x2b8],eax
100bcbea:	8b ce                	mov    ecx,esi
100bcbec:	89 5d fc             	mov    DWORD PTR [ebp-0x4],ebx
100bcbef:	f3 0f 7e 07          	movq   xmm0,QWORD PTR [edi]
100bcbf3:	66 0f d6 86 38 02 00 	movq   QWORD PTR [esi+0x238],xmm0
100bcbfa:	00 
100bcbfb:	8b 47 08             	mov    eax,DWORD PTR [edi+0x8]
100bcbfe:	89 86 40 02 00 00    	mov    DWORD PTR [esi+0x240],eax
100bcc04:	8d 45 08             	lea    eax,[ebp+0x8]
100bcc07:	50                   	push   eax
100bcc08:	89 9e 44 02 00 00    	mov    DWORD PTR [esi+0x244],ebx
100bcc0e:	8b 5d 10             	mov    ebx,DWORD PTR [ebp+0x10]
100bcc11:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100bcc14:	8b 16                	mov    edx,DWORD PTR [esi]
100bcc16:	83 c0 08             	add    eax,0x8
100bcc19:	53                   	push   ebx
100bcc1a:	57                   	push   edi
100bcc1b:	50                   	push   eax
100bcc1c:	ff 92 58 01 00 00    	call   DWORD PTR [edx+0x158]
100bcc22:	83 f8 02             	cmp    eax,0x2
100bcc25:	74 73                	je     0x100bcc9a
100bcc27:	83 f8 01             	cmp    eax,0x1
100bcc2a:	74 7c                	je     0x100bcca8
100bcc2c:	f3 0f 10 45 08       	movss  xmm0,DWORD PTR [ebp+0x8]
100bcc31:	8d 45 f0             	lea    eax,[ebp-0x10]
100bcc34:	8b 16                	mov    edx,DWORD PTR [esi]
100bcc36:	50                   	push   eax
100bcc37:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100bcc3a:	53                   	push   ebx
100bcc3b:	51                   	push   ecx
100bcc3c:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100bcc41:	83 c0 08             	add    eax,0x8
100bcc44:	57                   	push   edi
100bcc45:	50                   	push   eax
100bcc46:	8b ce                	mov    ecx,esi
100bcc48:	ff 92 bc 01 00 00    	call   DWORD PTR [edx+0x1bc]
100bcc4e:	85 c0                	test   eax,eax
100bcc50:	74 56                	je     0x100bcca8
100bcc52:	f3 0f 7e 45 f0       	movq   xmm0,QWORD PTR [ebp-0x10]
100bcc57:	8b ce                	mov    ecx,esi
100bcc59:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
100bcc5c:	66 0f d6 86 38 02 00 	movq   QWORD PTR [esi+0x238],xmm0
100bcc63:	00 
100bcc64:	89 86 40 02 00 00    	mov    DWORD PTR [esi+0x240],eax
100bcc6a:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
100bcc6d:	83 c8 08             	or     eax,0x8
100bcc70:	89 86 44 02 00 00    	mov    DWORD PTR [esi+0x244],eax
100bcc76:	f3 0f 7e 07          	movq   xmm0,QWORD PTR [edi]
100bcc7a:	66 0f d6 86 48 02 00 	movq   QWORD PTR [esi+0x248],xmm0
100bcc81:	00 
100bcc82:	8b 47 08             	mov    eax,DWORD PTR [edi+0x8]
100bcc85:	89 86 50 02 00 00    	mov    DWORD PTR [esi+0x250],eax
100bcc8b:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
100bcc8e:	53                   	push   ebx
100bcc8f:	89 86 54 02 00 00    	mov    DWORD PTR [esi+0x254],eax
100bcc95:	e8 36 4e 00 00       	call   0x100c1ad0
100bcc9a:	b8 01 00 00 00       	mov    eax,0x1
100bcc9f:	5f                   	pop    edi
100bcca0:	5e                   	pop    esi
100bcca1:	5b                   	pop    ebx
100bcca2:	8b e5                	mov    esp,ebp
100bcca4:	5d                   	pop    ebp
100bcca5:	c2 0c 00             	ret    0xc
100bcca8:	8b 07                	mov    eax,DWORD PTR [edi]
100bccaa:	83 ec 0c             	sub    esp,0xc
100bccad:	8b cc                	mov    ecx,esp
100bccaf:	89 01                	mov    DWORD PTR [ecx],eax
100bccb1:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100bccb4:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
100bccb7:	8b 47 08             	mov    eax,DWORD PTR [edi+0x8]
100bccba:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
100bccbd:	8b ce                	mov    ecx,esi
100bccbf:	e8 4c 0f 00 00       	call   0x100bdc10
100bccc4:	85 c0                	test   eax,eax
100bccc6:	74 2b                	je     0x100bccf3
100bccc8:	f3 0f 7e 07          	movq   xmm0,QWORD PTR [edi]
100bcccc:	8b ce                	mov    ecx,esi
100bccce:	66 0f d6 86 c4 02 00 	movq   QWORD PTR [esi+0x2c4],xmm0
100bccd5:	00 
100bccd6:	8b 47 08             	mov    eax,DWORD PTR [edi+0x8]
100bccd9:	53                   	push   ebx
100bccda:	89 86 cc 02 00 00    	mov    DWORD PTR [esi+0x2cc],eax
100bcce0:	e8 eb 4d 00 00       	call   0x100c1ad0
100bcce5:	b8 01 00 00 00       	mov    eax,0x1
100bccea:	5f                   	pop    edi
100bcceb:	5e                   	pop    esi
100bccec:	5b                   	pop    ebx
100bcced:	8b e5                	mov    esp,ebp
100bccef:	5d                   	pop    ebp
100bccf0:	c2 0c 00             	ret    0xc
100bccf3:	5f                   	pop    edi
100bccf4:	5e                   	pop    esi
100bccf5:	33 c0                	xor    eax,eax
100bccf7:	5b                   	pop    ebx
100bccf8:	8b e5                	mov    esp,ebp
100bccfa:	5d                   	pop    ebp
100bccfb:	c2 0c 00             	ret    0xc
