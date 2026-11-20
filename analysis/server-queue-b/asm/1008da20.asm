
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1008da20 <.text+0x8ca20>:
1008da20:	55                   	push   ebp
1008da21:	8b ec                	mov    ebp,esp
1008da23:	53                   	push   ebx
1008da24:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
1008da27:	56                   	push   esi
1008da28:	57                   	push   edi
1008da29:	8b f9                	mov    edi,ecx
1008da2b:	be 30 21 1a 10       	mov    esi,0x101a2130
1008da30:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
1008da33:	8b 10                	mov    edx,DWORD PTR [eax]
1008da35:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1008da3a:	03 90 98 00 00 00    	add    edx,DWORD PTR [eax+0x98]
1008da40:	8a 02                	mov    al,BYTE PTR [edx]
1008da42:	3a 06                	cmp    al,BYTE PTR [esi]
1008da44:	75 1a                	jne    0x1008da60
1008da46:	84 c0                	test   al,al
1008da48:	74 12                	je     0x1008da5c
1008da4a:	8a 42 01             	mov    al,BYTE PTR [edx+0x1]
1008da4d:	3a 46 01             	cmp    al,BYTE PTR [esi+0x1]
1008da50:	75 0e                	jne    0x1008da60
1008da52:	83 c2 02             	add    edx,0x2
1008da55:	83 c6 02             	add    esi,0x2
1008da58:	84 c0                	test   al,al
1008da5a:	75 e4                	jne    0x1008da40
1008da5c:	33 c0                	xor    eax,eax
1008da5e:	eb 05                	jmp    0x1008da65
1008da60:	1b c0                	sbb    eax,eax
1008da62:	83 c8 01             	or     eax,0x1
1008da65:	85 c0                	test   eax,eax
1008da67:	75 7e                	jne    0x1008dae7
1008da69:	8b 87 7c 01 00 00    	mov    eax,DWORD PTR [edi+0x17c]
1008da6f:	85 c0                	test   eax,eax
1008da71:	74 23                	je     0x1008da96
1008da73:	53                   	push   ebx
1008da74:	50                   	push   eax
1008da75:	e8 e6 b5 08 00       	call   0x10119060
1008da7a:	83 c4 08             	add    esp,0x8
1008da7d:	85 c0                	test   eax,eax
1008da7f:	75 15                	jne    0x1008da96
1008da81:	50                   	push   eax
1008da82:	6a 01                	push   0x1
1008da84:	8d 87 84 01 00 00    	lea    eax,[edi+0x184]
1008da8a:	50                   	push   eax
1008da8b:	ff 77 04             	push   DWORD PTR [edi+0x4]
1008da8e:	e8 7d 05 00 00       	call   0x1008e010
1008da93:	83 c4 10             	add    esp,0x10
1008da96:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
1008da99:	83 b9 d0 01 00 00 00 	cmp    DWORD PTR [ecx+0x1d0],0x0
1008daa0:	74 27                	je     0x1008dac9
1008daa2:	f7 81 a4 01 00 00 00 	test   DWORD PTR [ecx+0x1a4],0x400
1008daa9:	04 00 00 
1008daac:	75 1b                	jne    0x1008dac9
1008daae:	6a 00                	push   0x0
1008dab0:	6a 01                	push   0x1
1008dab2:	8d 87 84 01 00 00    	lea    eax,[edi+0x184]
1008dab8:	50                   	push   eax
1008dab9:	51                   	push   ecx
1008daba:	e8 51 05 00 00       	call   0x1008e010
1008dabf:	83 c4 10             	add    esp,0x10
1008dac2:	5f                   	pop    edi
1008dac3:	5e                   	pop    esi
1008dac4:	5b                   	pop    ebx
1008dac5:	5d                   	pop    ebp
1008dac6:	c2 04 00             	ret    0x4
1008dac9:	53                   	push   ebx
1008daca:	8d 8f e4 00 00 00    	lea    ecx,[edi+0xe4]
1008dad0:	e8 6b 9c f8 ff       	call   0x10017740
1008dad5:	8b cf                	mov    ecx,edi
1008dad7:	e8 84 f7 ff ff       	call   0x1008d260
1008dadc:	85 c0                	test   eax,eax
1008dade:	74 07                	je     0x1008dae7
1008dae0:	c7 47 7c 00 00 00 00 	mov    DWORD PTR [edi+0x7c],0x0
1008dae7:	5f                   	pop    edi
1008dae8:	5e                   	pop    esi
1008dae9:	5b                   	pop    ebx
1008daea:	5d                   	pop    ebp
1008daeb:	c2 04 00             	ret    0x4
