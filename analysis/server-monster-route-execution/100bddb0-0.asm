
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100bddb0 <.text+0xbcdb0>:
100bddb0:	53                   	push   ebx
100bddb1:	56                   	push   esi
100bddb2:	57                   	push   edi
100bddb3:	8b f1                	mov    esi,ecx
100bddb5:	e8 f6 3c 00 00       	call   0x100c1ab0
100bddba:	8b 86 b8 02 00 00    	mov    eax,DWORD PTR [esi+0x2b8]
100bddc0:	33 ff                	xor    edi,edi
100bddc2:	48                   	dec    eax
100bddc3:	83 f8 3f             	cmp    eax,0x3f
100bddc6:	0f 87 05 01 00 00    	ja     0x100bded1
100bddcc:	0f b6 80 f0 de 0b 10 	movzx  eax,BYTE PTR [eax+0x100bdef0]
100bddd3:	ff 24 85 d8 de 0b 10 	jmp    DWORD PTR [eax*4+0x100bded8]
100bddda:	8b 4e 0c             	mov    ecx,DWORD PTR [esi+0xc]
100bdddd:	33 ff                	xor    edi,edi
100bdddf:	85 c9                	test   ecx,ecx
100bdde1:	74 45                	je     0x100bde28
100bdde3:	81 c6 44 02 00 00    	add    esi,0x244
100bdde9:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]
100bddf0:	83 ff 08             	cmp    edi,0x8
100bddf3:	7d 33                	jge    0x100bde28
100bddf5:	c7 06 10 00 00 00    	mov    DWORD PTR [esi],0x10
100bddfb:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
100bddfe:	f3 0f 7e 40 08       	movq   xmm0,QWORD PTR [eax+0x8]
100bde03:	66 0f d6 46 f4       	movq   QWORD PTR [esi-0xc],xmm0
100bde08:	8b 40 10             	mov    eax,DWORD PTR [eax+0x10]
100bde0b:	89 46 fc             	mov    DWORD PTR [esi-0x4],eax
100bde0e:	8b 01                	mov    eax,DWORD PTR [ecx]
100bde10:	ff 90 dc 00 00 00    	call   DWORD PTR [eax+0xdc]
100bde16:	8b c8                	mov    ecx,eax
100bde18:	85 c9                	test   ecx,ecx
100bde1a:	74 06                	je     0x100bde22
100bde1c:	47                   	inc    edi
100bde1d:	83 c6 10             	add    esi,0x10
100bde20:	eb ce                	jmp    0x100bddf0
100bde22:	81 0e 80 00 00 00    	or     DWORD PTR [esi],0x80
100bde28:	bf 01 00 00 00       	mov    edi,0x1
100bde2d:	8b c7                	mov    eax,edi
100bde2f:	5f                   	pop    edi
100bde30:	5e                   	pop    esi
100bde31:	5b                   	pop    ebx
100bde32:	c3                   	ret
100bde33:	8d 8e 84 01 00 00    	lea    ecx,[esi+0x184]
100bde39:	e8 52 99 f5 ff       	call   0x10017790
100bde3e:	50                   	push   eax
100bde3f:	6a 02                	push   0x2
100bde41:	8d 86 f4 02 00 00    	lea    eax,[esi+0x2f4]
100bde47:	8b ce                	mov    ecx,esi
100bde49:	50                   	push   eax
100bde4a:	e8 71 ed ff ff       	call   0x100bcbc0
100bde4f:	8b f8                	mov    edi,eax
100bde51:	5f                   	pop    edi
100bde52:	5e                   	pop    esi
100bde53:	5b                   	pop    ebx
100bde54:	c3                   	ret
100bde55:	6a 00                	push   0x0
100bde57:	6a 40                	push   0x40
100bde59:	8d 86 c4 02 00 00    	lea    eax,[esi+0x2c4]
100bde5f:	8b ce                	mov    ecx,esi
100bde61:	50                   	push   eax
100bde62:	e8 59 ed ff ff       	call   0x100bcbc0
100bde67:	8b f8                	mov    edi,eax
100bde69:	5f                   	pop    edi
100bde6a:	5e                   	pop    esi
100bde6b:	5b                   	pop    ebx
100bde6c:	c3                   	ret
100bde6d:	8d 8e 8c 01 00 00    	lea    ecx,[esi+0x18c]
100bde73:	e8 08 99 f5 ff       	call   0x10017780
100bde78:	85 c0                	test   eax,eax
100bde7a:	74 55                	je     0x100bded1
100bde7c:	8d 8e 8c 01 00 00    	lea    ecx,[esi+0x18c]
100bde82:	e8 09 99 f5 ff       	call   0x10017790
100bde87:	50                   	push   eax
100bde88:	6a 01                	push   0x1
100bde8a:	8d 8e 8c 01 00 00    	lea    ecx,[esi+0x18c]
100bde90:	e8 0b 99 f5 ff       	call   0x100177a0
100bde95:	8b ce                	mov    ecx,esi
100bde97:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100bde9a:	83 c0 08             	add    eax,0x8
100bde9d:	50                   	push   eax
100bde9e:	e8 1d ed ff ff       	call   0x100bcbc0
100bdea3:	8b f8                	mov    edi,eax
100bdea5:	5f                   	pop    edi
100bdea6:	5e                   	pop    esi
100bdea7:	5b                   	pop    ebx
100bdea8:	c3                   	ret
100bdea9:	8b 86 c4 02 00 00    	mov    eax,DWORD PTR [esi+0x2c4]
100bdeaf:	83 ec 0c             	sub    esp,0xc
100bdeb2:	8b cc                	mov    ecx,esp
100bdeb4:	89 01                	mov    DWORD PTR [ecx],eax
100bdeb6:	8b 86 c8 02 00 00    	mov    eax,DWORD PTR [esi+0x2c8]
100bdebc:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
100bdebf:	8b 86 cc 02 00 00    	mov    eax,DWORD PTR [esi+0x2cc]
100bdec5:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
100bdec8:	8b ce                	mov    ecx,esi
100bdeca:	e8 41 fd ff ff       	call   0x100bdc10
100bdecf:	8b f8                	mov    edi,eax
100bded1:	8b c7                	mov    eax,edi
100bded3:	5f                   	pop    edi
100bded4:	5e                   	pop    esi
100bded5:	5b                   	pop    ebx
100bded6:	c3                   	ret
