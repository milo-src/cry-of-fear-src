
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1011adc0 <.text+0x119dc0>:
1011adc0:	55                   	push   ebp
1011adc1:	8b ec                	mov    ebp,esp
1011adc3:	81 ec 18 01 00 00    	sub    esp,0x118
1011adc9:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
1011adce:	33 c5                	xor    eax,ebp
1011add0:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
1011add3:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
1011add6:	8b 55 18             	mov    edx,DWORD PTR [ebp+0x18]
1011add9:	53                   	push   ebx
1011adda:	57                   	push   edi
1011addb:	8b f9                	mov    edi,ecx
1011addd:	89 85 e8 fe ff ff    	mov    DWORD PTR [ebp-0x118],eax
1011ade3:	8b 4d 10             	mov    ecx,DWORD PTR [ebp+0x10]
1011ade6:	33 db                	xor    ebx,ebx
1011ade8:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
1011adeb:	89 8d f0 fe ff ff    	mov    DWORD PTR [ebp-0x110],ecx
1011adf1:	8b 4d 14             	mov    ecx,DWORD PTR [ebp+0x14]
1011adf4:	89 85 f4 fe ff ff    	mov    DWORD PTR [ebp-0x10c],eax
1011adfa:	89 8d ec fe ff ff    	mov    DWORD PTR [ebp-0x114],ecx
1011ae00:	85 d2                	test   edx,edx
1011ae02:	0f 8e 75 02 00 00    	jle    0x1011b07d
1011ae08:	56                   	push   esi
1011ae09:	8d 71 08             	lea    esi,[ecx+0x8]
1011ae0c:	89 95 f8 fe ff ff    	mov    DWORD PTR [ebp-0x108],edx
1011ae12:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
1011ae16:	66 66 0f 1f 84 00 00 	data16 nop WORD PTR [eax+eax*1+0x0]
1011ae1d:	00 00 00 
1011ae20:	8b 46 f8             	mov    eax,DWORD PTR [esi-0x8]
1011ae23:	0f bf 4e 04          	movsx  ecx,WORD PTR [esi+0x4]
1011ae27:	0f af 0c 85 40 b1 21 	imul   ecx,DWORD PTR [eax*4+0x1021b140]
1011ae2e:	10 
1011ae2f:	8b 06                	mov    eax,DWORD PTR [esi]
1011ae31:	03 85 f0 fe ff ff    	add    eax,DWORD PTR [ebp-0x110]
1011ae37:	51                   	push   ecx
1011ae38:	50                   	push   eax
1011ae39:	8b cf                	mov    ecx,edi
1011ae3b:	e8 e0 b5 ff ff       	call   0x10116420
1011ae40:	85 c0                	test   eax,eax
1011ae42:	8d 4b 01             	lea    ecx,[ebx+0x1]
1011ae45:	8d 76 10             	lea    esi,[esi+0x10]
1011ae48:	0f 44 cb             	cmove  ecx,ebx
1011ae4b:	83 ad f8 fe ff ff 01 	sub    DWORD PTR [ebp-0x108],0x1
1011ae52:	8b d9                	mov    ebx,ecx
1011ae54:	75 ca                	jne    0x1011ae20
1011ae56:	8b 45 18             	mov    eax,DWORD PTR [ebp+0x18]
1011ae59:	8b cf                	mov    ecx,edi
1011ae5b:	2b c3                	sub    eax,ebx
1011ae5d:	89 85 f8 fe ff ff    	mov    DWORD PTR [ebp-0x108],eax
1011ae63:	8d 85 f8 fe ff ff    	lea    eax,[ebp-0x108]
1011ae69:	6a 01                	push   0x1
1011ae6b:	50                   	push   eax
1011ae6c:	ff b5 f4 fe ff ff    	push   DWORD PTR [ebp-0x10c]
1011ae72:	e8 19 03 00 00       	call   0x1011b190
1011ae77:	8b b5 ec fe ff ff    	mov    esi,DWORD PTR [ebp-0x114]
1011ae7d:	83 c6 04             	add    esi,0x4
1011ae80:	89 b5 f4 fe ff ff    	mov    DWORD PTR [ebp-0x10c],esi
1011ae86:	8b 46 fc             	mov    eax,DWORD PTR [esi-0x4]
1011ae89:	0f b7 4e 08          	movzx  ecx,WORD PTR [esi+0x8]
1011ae8d:	8b 5e 04             	mov    ebx,DWORD PTR [esi+0x4]
1011ae90:	03 9d f0 fe ff ff    	add    ebx,DWORD PTR [ebp-0x110]
1011ae96:	8b 04 85 40 b1 21 10 	mov    eax,DWORD PTR [eax*4+0x1021b140]
1011ae9d:	0f bf c9             	movsx  ecx,cx
1011aea0:	0f af c1             	imul   eax,ecx
1011aea3:	8b cf                	mov    ecx,edi
1011aea5:	50                   	push   eax
1011aea6:	53                   	push   ebx
1011aea7:	e8 74 b5 ff ff       	call   0x10116420
1011aeac:	85 c0                	test   eax,eax
1011aeae:	0f 85 b3 01 00 00    	jne    0x1011b067
1011aeb4:	8b 46 fc             	mov    eax,DWORD PTR [esi-0x4]
1011aeb7:	83 f8 11             	cmp    eax,0x11
1011aeba:	0f 87 97 01 00 00    	ja     0x1011b057
1011aec0:	ff 24 85 ac b0 11 10 	jmp    DWORD PTR [eax*4+0x1011b0ac]
1011aec7:	0f b7 4e 08          	movzx  ecx,WORD PTR [esi+0x8]
1011aecb:	0f bf c1             	movsx  eax,cx
1011aece:	8b cf                	mov    ecx,edi
1011aed0:	50                   	push   eax
1011aed1:	53                   	push   ebx
1011aed2:	ff 36                	push   DWORD PTR [esi]
1011aed4:	e8 37 02 00 00       	call   0x1011b110
1011aed9:	e9 89 01 00 00       	jmp    0x1011b067
1011aede:	0f b7 4e 08          	movzx  ecx,WORD PTR [esi+0x8]
1011aee2:	0f bf c1             	movsx  eax,cx
1011aee5:	8b cf                	mov    ecx,edi
1011aee7:	50                   	push   eax
1011aee8:	53                   	push   ebx
1011aee9:	ff 36                	push   DWORD PTR [esi]
1011aeeb:	e8 d0 04 00 00       	call   0x1011b3c0
1011aef0:	e9 72 01 00 00       	jmp    0x1011b067
1011aef5:	0f b7 4e 08          	movzx  ecx,WORD PTR [esi+0x8]
1011aef9:	0f bf c1             	movsx  eax,cx
1011aefc:	8b cf                	mov    ecx,edi
1011aefe:	50                   	push   eax
1011aeff:	53                   	push   ebx
1011af00:	ff 36                	push   DWORD PTR [esi]
1011af02:	e8 19 04 00 00       	call   0x1011b320
1011af07:	e9 5b 01 00 00       	jmp    0x1011b067
1011af0c:	0f b7 4e 08          	movzx  ecx,WORD PTR [esi+0x8]
1011af10:	8b c1                	mov    eax,ecx
1011af12:	66 83 f9 40          	cmp    cx,0x40
1011af16:	7e 16                	jle    0x1011af2e
1011af18:	6a 40                	push   0x40
1011af1a:	68 68 59 1e 10       	push   0x101e5968
1011af1f:	6a 04                	push   0x4
1011af21:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1011af27:	0f b7 46 08          	movzx  eax,WORD PTR [esi+0x8]
1011af2b:	83 c4 0c             	add    esp,0xc
1011af2e:	33 d2                	xor    edx,edx
1011af30:	0f b7 c8             	movzx  ecx,ax
1011af33:	33 f6                	xor    esi,esi
1011af35:	66 3b d0             	cmp    dx,ax
1011af38:	7d 7e                	jge    0x1011afb8
1011af3a:	8b cb                	mov    ecx,ebx
1011af3c:	89 8d f8 fe ff ff    	mov    DWORD PTR [ebp-0x108],ecx
1011af42:	8b 85 f4 fe ff ff    	mov    eax,DWORD PTR [ebp-0x10c]
1011af48:	8b 40 fc             	mov    eax,DWORD PTR [eax-0x4]
1011af4b:	83 c0 fe             	add    eax,0xfffffffe
1011af4e:	83 f8 04             	cmp    eax,0x4
1011af51:	77 44                	ja     0x1011af97
1011af53:	ff 24 85 f4 b0 11 10 	jmp    DWORD PTR [eax*4+0x1011b0f4]
1011af5a:	ff 34 b3             	push   DWORD PTR [ebx+esi*4]
1011af5d:	8b cf                	mov    ecx,edi
1011af5f:	e8 cc b5 ff ff       	call   0x10116530
1011af64:	eb 2a                	jmp    0x1011af90
1011af66:	ff 34 b3             	push   DWORD PTR [ebx+esi*4]
1011af69:	eb 1e                	jmp    0x1011af89
1011af6b:	ff 34 b3             	push   DWORD PTR [ebx+esi*4]
1011af6e:	8b cf                	mov    ecx,edi
1011af70:	e8 7b b5 ff ff       	call   0x101164f0
1011af75:	eb 19                	jmp    0x1011af90
1011af77:	ff 34 b3             	push   DWORD PTR [ebx+esi*4]
1011af7a:	8b cf                	mov    ecx,edi
1011af7c:	e8 4f b5 ff ff       	call   0x101164d0
1011af81:	eb 0d                	jmp    0x1011af90
1011af83:	e8 08 c8 ef ff       	call   0x10017790
1011af88:	50                   	push   eax
1011af89:	8b cf                	mov    ecx,edi
1011af8b:	e8 c0 b5 ff ff       	call   0x10116550
1011af90:	89 84 b5 fc fe ff ff 	mov    DWORD PTR [ebp+esi*4-0x104],eax
1011af97:	8b 85 f4 fe ff ff    	mov    eax,DWORD PTR [ebp-0x10c]
1011af9d:	46                   	inc    esi
1011af9e:	83 85 f8 fe ff ff 08 	add    DWORD PTR [ebp-0x108],0x8
1011afa5:	8b 8d f8 fe ff ff    	mov    ecx,DWORD PTR [ebp-0x108]
1011afab:	0f b7 50 08          	movzx  edx,WORD PTR [eax+0x8]
1011afaf:	0f bf c2             	movsx  eax,dx
1011afb2:	3b f0                	cmp    esi,eax
1011afb4:	7c 8c                	jl     0x1011af42
1011afb6:	8b ca                	mov    ecx,edx
1011afb8:	8b b5 f4 fe ff ff    	mov    esi,DWORD PTR [ebp-0x10c]
1011afbe:	0f bf c1             	movsx  eax,cx
1011afc1:	8b cf                	mov    ecx,edi
1011afc3:	50                   	push   eax
1011afc4:	8d 85 fc fe ff ff    	lea    eax,[ebp-0x104]
1011afca:	50                   	push   eax
1011afcb:	ff 36                	push   DWORD PTR [esi]
1011afcd:	e8 be 01 00 00       	call   0x1011b190
1011afd2:	e9 90 00 00 00       	jmp    0x1011b067
1011afd7:	0f b7 4e 08          	movzx  ecx,WORD PTR [esi+0x8]
1011afdb:	0f bf c1             	movsx  eax,cx
1011afde:	8b cf                	mov    ecx,edi
1011afe0:	50                   	push   eax
1011afe1:	53                   	push   ebx
1011afe2:	ff 36                	push   DWORD PTR [esi]
1011afe4:	e8 37 02 00 00       	call   0x1011b220
1011afe9:	eb 7c                	jmp    0x1011b067
1011afeb:	0f b7 4e 08          	movzx  ecx,WORD PTR [esi+0x8]
1011afef:	0f bf c1             	movsx  eax,cx
1011aff2:	8b cf                	mov    ecx,edi
1011aff4:	50                   	push   eax
1011aff5:	53                   	push   ebx
1011aff6:	ff 36                	push   DWORD PTR [esi]
1011aff8:	e8 43 04 00 00       	call   0x1011b440
1011affd:	eb 68                	jmp    0x1011b067
1011afff:	0f b7 4e 08          	movzx  ecx,WORD PTR [esi+0x8]
1011b003:	0f bf c1             	movsx  eax,cx
1011b006:	8b cf                	mov    ecx,edi
1011b008:	50                   	push   eax
1011b009:	53                   	push   ebx
1011b00a:	ff 36                	push   DWORD PTR [esi]
1011b00c:	e8 7f 01 00 00       	call   0x1011b190
1011b011:	eb 54                	jmp    0x1011b067
1011b013:	0f b7 4e 08          	movzx  ecx,WORD PTR [esi+0x8]
1011b017:	0f bf c1             	movsx  eax,cx
1011b01a:	8b cf                	mov    ecx,edi
1011b01c:	53                   	push   ebx
1011b01d:	03 c0                	add    eax,eax
1011b01f:	50                   	push   eax
1011b020:	ff 36                	push   DWORD PTR [esi]
1011b022:	e8 39 fd ff ff       	call   0x1011ad60
1011b027:	eb 3e                	jmp    0x1011b067
1011b029:	0f b7 4e 08          	movzx  ecx,WORD PTR [esi+0x8]
1011b02d:	53                   	push   ebx
1011b02e:	0f bf c1             	movsx  eax,cx
1011b031:	8b cf                	mov    ecx,edi
1011b033:	50                   	push   eax
1011b034:	ff 36                	push   DWORD PTR [esi]
1011b036:	e8 25 fd ff ff       	call   0x1011ad60
1011b03b:	eb 2a                	jmp    0x1011b067
1011b03d:	0f b7 4e 08          	movzx  ecx,WORD PTR [esi+0x8]
1011b041:	0f bf c1             	movsx  eax,cx
1011b044:	8b cf                	mov    ecx,edi
1011b046:	50                   	push   eax
1011b047:	53                   	push   ebx
1011b048:	ff 36                	push   DWORD PTR [esi]
1011b04a:	ff b5 e8 fe ff ff    	push   DWORD PTR [ebp-0x118]
1011b050:	e8 db 00 00 00       	call   0x1011b130
1011b055:	eb 10                	jmp    0x1011b067
1011b057:	68 9c 59 1e 10       	push   0x101e599c
1011b05c:	6a 04                	push   0x4
1011b05e:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1011b064:	83 c4 08             	add    esp,0x8
1011b067:	83 c6 10             	add    esi,0x10
1011b06a:	83 6d 18 01          	sub    DWORD PTR [ebp+0x18],0x1
1011b06e:	89 b5 f4 fe ff ff    	mov    DWORD PTR [ebp-0x10c],esi
1011b074:	0f 85 0c fe ff ff    	jne    0x1011ae86
1011b07a:	5e                   	pop    esi
1011b07b:	eb 17                	jmp    0x1011b094
1011b07d:	6a 01                	push   0x1
1011b07f:	8d 8d f8 fe ff ff    	lea    ecx,[ebp-0x108]
1011b085:	89 95 f8 fe ff ff    	mov    DWORD PTR [ebp-0x108],edx
1011b08b:	51                   	push   ecx
1011b08c:	50                   	push   eax
1011b08d:	8b cf                	mov    ecx,edi
1011b08f:	e8 fc 00 00 00       	call   0x1011b190
1011b094:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
1011b097:	b8 01 00 00 00       	mov    eax,0x1
1011b09c:	5f                   	pop    edi
1011b09d:	33 cd                	xor    ecx,ebp
1011b09f:	5b                   	pop    ebx
1011b0a0:	e8 0e 2b 02 00       	call   0x1013dbb3
1011b0a5:	8b e5                	mov    esp,ebp
1011b0a7:	5d                   	pop    ebp
1011b0a8:	c2 14 00             	ret    0x14
