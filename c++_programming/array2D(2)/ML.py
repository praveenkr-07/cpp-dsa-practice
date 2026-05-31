import numpy as np

# Input array
X = np.array([[1,0,1,0],
              [1,0,1,1],
              [0,1,0,1]])

# Output
y = np.array([[1],
              [1],
              [0]])

# Sigmoid Function
def sigmoid(x):
    return 1 / (1 + np.exp(-x))

# Derivative of Sigmoid
def derivatives_sigmoid(x):
    return x * (1 - x)

# Variable initialization
epoch = 5000      # training iterations
lr = 0.1          # learning rate
inputlayer_neurons = X.shape[1]
hiddenlayer_neurons = 3
output_neurons = 1

# Weight and bias initialization
wh = np.random.uniform(size=(inputlayer_neurons, hiddenlayer_neurons))
bh = np.random.uniform(size=(1, hiddenlayer_neurons))
wout = np.random.uniform(size=(hiddenlayer_neurons, output_neurons))
bout = np.random.uniform(size=(1, output_neurons))

# Training
for i in range(epoch):

    # Forward Propagation
    hidden_layer_input = np.dot(X, wh)
    hidden_layer_input += bh
    hidden_layer_activations = sigmoid(hidden_layer_input)

    output_layer_input = np.dot(hidden_layer_activations, wout)
    output_layer_input += bout
    output = sigmoid(output_layer_input)

    # Backpropagation
    E = y - output
    slope_output_layer = derivatives_sigmoid(output)
    slope_hidden_layer = derivatives_sigmoid(hidden_layer_activations)

    d_output = E * slope_output_layer
    Error_at_hidden_layer = d_output.dot(wout.T)
    d_hiddenlayer = Error_at_hidden_layer * slope_hidden_layer

    # Updating weights and biases
    wout += hidden_layer_activations.T.dot(d_output) * lr
    bout += np.sum(d_output, axis=0, keepdims=True) * lr
    wh += X.T.dot(d_hiddenlayer) * lr
    bh += np.sum(d_hiddenlayer, axis=0, keepdims=True) * lr

# Output
print("Predicted Output:")
print(output)